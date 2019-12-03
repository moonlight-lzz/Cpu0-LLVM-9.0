//===-- Cpu0TargetMachine.cpp - Define TargetMachine for Cpu0 -----------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
//
//===----------------------------------------------------------------------===//

#include "Cpu0TargetMachine.h"
//#include "LeonPasses.h"
#include "Cpu0.h"
#include "Cpu0SEISelDAGToDAG.h"
#include "Cpu0TargetObjectFile.h"
#include "TargetInfo/Cpu0TargetInfo.h"
#include "llvm/CodeGen/Passes.h"
#include "llvm/Support/CodeGen.h"
#include "llvm/CodeGen/TargetPassConfig.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Support/TargetRegistry.h"
using namespace llvm;

#define DEBUG_TYPE "cpu0"

extern "C" void LLVMInitializeCpu0Target() {
  //Register the target.
  RegisterTargetMachine<Cpu0ebTargetMachine> X(getTheCpu0Target());
  
  RegisterTargetMachine<Cpu0elTargetMachine> Y(getTheCpu0elTarget());
}

static std::string computeDataLayout(const Triple &TT, StringRef CPU,
                                     const TargetOptions &Options,
                                     bool isLittle) {
  std::string Ret = "";
  // There are both little and big endian cpu0.
  if (isLittle)
    Ret += "e";
  else
    Ret += "E";

  Ret += "-m:m";

  // Pointers are 32 bit on some ABIs.
  Ret += "-p:32:32";

  // 8 and 16 bit integers only need to have natural alignment, but try to
  // align them to 32 bits. 64 bit integers have natural alignment.
  Ret += "-i8:8:32-i16:16:32-i64:64";

  // 32 bit registers are always available and the stack is at least 64 bit
  // aligned.
  Ret += "-n32-S64";

  return Ret;
}

static Reloc::Model getEffectiveRelocModel(Optional<CodeModel::Model> CM,
                                           Optional<Reloc::Model> RM) {
  if (!RM.hasValue())
    return Reloc::Static;
  return *RM;
}


// Code models. Some only make sense for 64-bit code.
//
// SunCC  Reloc   CodeModel  Constraints
// abs32  Static  Small      text+data+bss linked below 2^32 bytes
// abs44  Static  Medium     text+data+bss linked below 2^44 bytes
// abs64  Static  Large      text smaller than 2^31 bytes
// pic13  PIC_    Small      GOT < 2^13 bytes
// pic32  PIC_    Medium     GOT < 2^32 bytes
//
// All code models require that the text segment is smaller than 2GB.
// static CodeModel::Model
// getEffectiveCpu0CodeModel(Optional<CodeModel::Model> CM, Reloc::Model RM,
//                            bool Is64Bit, bool JIT) {
//   if (CM) {
//     if (*CM == CodeModel::Tiny)
//       report_fatal_error("Target does not support the tiny CodeModel", false);
//     if (*CM == CodeModel::Kernel)
//       report_fatal_error("Target does not support the kernel CodeModel", false);
//     return *CM;
//   }
//   if (Is64Bit) {
//     if (JIT)
//       return CodeModel::Large;
//     return RM == Reloc::PIC_ ? CodeModel::Small : CodeModel::Medium;
//   }
//   return CodeModel::Small;
// }

/// Create an ILP32 architecture model
Cpu0TargetMachine::Cpu0TargetMachine(
    const Target &T, const Triple &TT, StringRef CPU, StringRef FS,
    const TargetOptions &Options, Optional<Reloc::Model> RM,
    Optional<CodeModel::Model> CM, CodeGenOpt::Level OL, bool isLittle)
    //- Default is big endian
    : LLVMTargetMachine(T, computeDataLayout(TT, CPU, Options, isLittle), TT,
                        CPU, FS, Options, getEffectiveRelocModel(CM, RM), CodeModel::Medium,
                        OL),
      isLittle(isLittle), TLOF(make_unique<Cpu0TargetObjectFile>()),
      ABI(Cpu0ABIInfo::computeTargetABI()),
      DefaultSubtarget(TT, CPU, FS, isLittle, *this) {
  // initAsmInfo will display features by llc -march=cpu0 -mcpu=help on 3.7 but
  // not on 3.6
  initAsmInfo();
}

Cpu0TargetMachine::~Cpu0TargetMachine() {}

void Cpu0ebTargetMachine::anchor() { }

Cpu0ebTargetMachine::Cpu0ebTargetMachine(const Target &T, const Triple &TT,
                                         StringRef CPU, StringRef FS,
                                         const TargetOptions &Options,
                                         Optional<Reloc::Model> RM,
                                         Optional<CodeModel::Model> CM,
                                         CodeGenOpt::Level OL, bool JIT)
    : Cpu0TargetMachine(T, TT, CPU, FS, Options, RM, CM, OL, false) {}

void Cpu0elTargetMachine::anchor() { }

Cpu0elTargetMachine::Cpu0elTargetMachine(const Target &T, const Triple &TT,
                                         StringRef CPU, StringRef FS,
                                         const TargetOptions &Options,
                                         Optional<Reloc::Model> RM,
                                         Optional<CodeModel::Model> CM,
                                         CodeGenOpt::Level OL, bool JIT)
    : Cpu0TargetMachine(T, TT, CPU, FS, Options, RM, CM, OL, true) {}


const Cpu0Subtarget *
Cpu0TargetMachine::getSubtargetImpl(const Function &F) const {
  Attribute CPUAttr = F.getFnAttribute("target-cpu");
  Attribute FSAttr = F.getFnAttribute("target-features");

  std::string CPU = !CPUAttr.hasAttribute(Attribute::None)
                        ? CPUAttr.getValueAsString().str()
                        : TargetCPU;
  std::string FS = !FSAttr.hasAttribute(Attribute::None)
                       ? FSAttr.getValueAsString().str()
                       : TargetFS;

  auto &I = SubtargetMap[CPU + FS];
  if (!I) {
    // This needs to be done before we create a new subtarget since any
    // creation will depend on the TM and the code generation flags on the
    // function that reside in TargetOptions.
    resetTargetOptions(F);
    I = llvm::make_unique<Cpu0Subtarget>(TargetTriple, CPU, FS, isLittle,
                                         *this);
  }
  return I.get();
}

namespace {
/// Cpu0 Code Generator Pass Configuration Options.
class Cpu0PassConfig : public TargetPassConfig {
public:
  Cpu0PassConfig(Cpu0TargetMachine &TM, PassManagerBase &PM)
    : TargetPassConfig(TM, PM) {}

  Cpu0TargetMachine &getCpu0TargetMachine() const {
    return getTM<Cpu0TargetMachine>();
  }

  const Cpu0Subtarget &getCpu0Subtarget() const {
    return *getCpu0TargetMachine().getSubtargetImpl();
  }

  bool addInstSelector() override;

  void addPreEmitPass() override;
};
} // namespace

TargetPassConfig *Cpu0TargetMachine::createPassConfig(PassManagerBase &PM) {
  return new Cpu0PassConfig(*this, PM);
}
// Install an instruction selector pass using
// the ISelDag to gen Cpu0 code.
bool Cpu0PassConfig::addInstSelector() {
  addPass(createCpu0SEISelDag(getCpu0TargetMachine(), getOptLevel()));
  return false;
}

// Implemented by targets that want to run passes immediately before
// machine code is emitted. return true if -print-machineinstrs should
// print out the code after the passes.
void Cpu0PassConfig::addPreEmitPass() {
  Cpu0TargetMachine &TM = getCpu0TargetMachine();
// //@8_2 1{
//   addPass(createCpu0DelJmpPass(TM));
// //@8_2 1}
//   addPass(createCpu0DelaySlotFillerPass(TM));
//@8_2 2}
  addPass(createCpu0LongBranchPass(TM));
  return;
}


