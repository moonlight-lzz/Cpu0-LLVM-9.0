#ifndef LLVM_LIB_TARGET_CPU0_CPU0_H
#define LLVM_LIB_TARGET_CPU0_CPU0_H

//#include "Cpu0Config.h"
#include "MCTargetDesc/Cpu0MCTargetDesc.h"
#include "llvm/Target/TargetMachine.h"

namespace llvm {
class Cpu0TargetMachine;
class FunctionPass;

FunctionPass *createCpu0LongBranchPass(Cpu0TargetMachine &TM);

} // end namespace llvm;

#endif
