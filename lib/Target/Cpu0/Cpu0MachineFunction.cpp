#include "Cpu0MachineFunction.h"
#include "Cpu0InstrInfo.h"
#include "Cpu0Subtarget.h"
#include "llvm/IR/Function.h"
#include "llvm/CodeGen/MachineInstrBuilder.h"
#include "llvm/CodeGen/MachineRegisterInfo.h"


using namespace llvm;

bool FixGlobalBaseReg;

bool Cpu0MachineFunctionInfo::globalBaseRegFixed() const {
  return FixGlobalBaseReg;
}

bool Cpu0MachineFunctionInfo::globalBaseRegSet() const {
  return GlobalBaseReg;
}

unsigned Cpu0MachineFunctionInfo::getGlobalBaseReg() {
  return GlobalBaseReg = Cpu0::GP;
}

Cpu0MachineFunctionInfo::~Cpu0MachineFunctionInfo() {}

void Cpu0MachineFunctionInfo::createEhDataRegsFI() {
  const TargetRegisterInfo &TRI = *MF.getSubtarget().getRegisterInfo();
  for (int I = 0; I < 2; ++I) {
    const TargetRegisterClass *RC = &Cpu0::CPURegsRegClass;

    
    EhDataRegFI[I] = MF.getFrameInfo().CreateStackObject(TRI.getSpillSize(*RC),
        TRI.getSpillAlignment(*RC), false);


    
  }
}

MachinePointerInfo Cpu0MachineFunctionInfo::callPtrInfo(const char *ES) {
  return MachinePointerInfo(MF.getPSVManager().getExternalSymbolCallEntry(ES));
}

MachinePointerInfo Cpu0MachineFunctionInfo::callPtrInfo(const GlobalValue *GV) {
  return MachinePointerInfo(MF.getPSVManager().getGlobalValueCallEntry(GV));
}

void Cpu0MachineFunctionInfo::anchor() { }

