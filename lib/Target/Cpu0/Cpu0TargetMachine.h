//===-- SparcTargetMachine.h - Define TargetMachine for Sparc ---*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares the Sparc specific subclass of TargetMachine.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_CPU0_CPU0TARGETMACHINE_H
#define LLVM_LIB_TARGET_CPU0_CPU0TARGETMACHINE_H

//#include "Cpu0InstrInfo.h"
#include "Cpu0Subtarget.h"
#include "llvm/Target/TargetMachine.h"

namespace llvm {

class Cpu0TargetMachine : public LLVMTargetMachine {
  bool isLittle;
  std::unique_ptr<TargetLoweringObjectFile> TLOF;
  // Selected ABI
  Cpu0ABIInfo ABI;
  Cpu0Subtarget DefaultSubtarget;
  mutable StringMap<std::unique_ptr<Cpu0Subtarget>> SubtargetMap;
public:
  Cpu0TargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                    StringRef FS, const TargetOptions &Options,
                    Optional<Reloc::Model> RM, Optional<CodeModel::Model> CM,
                    CodeGenOpt::Level OL, bool isLittle);
  ~Cpu0TargetMachine() override;

  const Cpu0Subtarget *getSubtargetImpl() const {
    return &DefaultSubtarget;
  }

  const Cpu0Subtarget *getSubtargetImpl(const Function &F) const override;

  // Pass Pipeline Configuration
  TargetPassConfig *createPassConfig(PassManagerBase &PM) override;

  TargetLoweringObjectFile *getObjFileLowering() const override {
    return TLOF.get();
  }
  bool isLittleEndian() const { return isLittle; }
  const Cpu0ABIInfo &getABI() const { return ABI; }
};

/// Cpu0 32-bit target machine
///
class Cpu0ebTargetMachine : public Cpu0TargetMachine {
  virtual void anchor();
public:
  Cpu0ebTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      Optional<Reloc::Model> RM, Optional<CodeModel::Model> CM,
                      CodeGenOpt::Level OL, bool JIT);
};


class Cpu0elTargetMachine : public Cpu0TargetMachine {
  virtual void anchor();

public:
  Cpu0elTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                      StringRef FS, const TargetOptions &Options,
                      Optional<Reloc::Model> RM, Optional<CodeModel::Model> CM,
                      CodeGenOpt::Level OL, bool JIT);
};

} // end namespace llvm

#endif
