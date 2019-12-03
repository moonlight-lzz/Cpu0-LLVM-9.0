#ifndef LLVM_LIB_TARGET_CPU0_CPU0REGISTERINFO_H
#define LLVM_LIB_TARGET_CPU0_CPU0REGISTERINFO_H

#include "llvm/CodeGen/TargetRegisterInfo.h"

#include "Cpu0.h"

#define GET_REGINFO_HEADER
#include "Cpu0GenRegisterInfo.inc"

namespace llvm {
/* struct Cpu0RegisterInfo : public Cpu0GenRegisterInfo { */
/*   Cpu0RegisterInfo(); */

/*   /// Code Generation virtual methods... */
/*   const MCPhysReg *getCalleeSavedRegs(const MachineFunction *MF) const override; */
/*   const uint32_t *getCallPreservedMask(const MachineFunction &MF, */
/*                                        CallingConv::ID CC) const override; */

/*   const uint32_t* getRTCallPreservedMask(CallingConv::ID CC) const; */

/*   BitVector getReservedRegs(const MachineFunction &MF) const override; */

/*   const TargetRegisterClass *getPointerRegClass(const MachineFunction &MF, */
/*                                                 unsigned Kind) const override; */

/*   void eliminateFrameIndex(MachineBasicBlock::iterator II, */
/*                            int SPAdj, unsigned FIOperandNum, */
/*                            RegScavenger *RS = nullptr) const override; */

/*   Register getFrameRegister(const MachineFunction &MF) const override; */

/*   bool canRealignStack(const MachineFunction &MF) const override; */

/* }; */

class Cpu0Subtarget;
class TargetInstrInfo;
class Type;

class Cpu0RegisterInfo : public Cpu0GenRegisterInfo {
protected:
  const Cpu0Subtarget &Subtarget;

public:
  Cpu0RegisterInfo(const Cpu0Subtarget &Subtarget);

  const MCPhysReg *getCalleeSavedRegs(const MachineFunction *MF) const override;

  const uint32_t *getCallPreservedMask(const MachineFunction &MF,
                                       CallingConv::ID) const override;

  BitVector getReservedRegs(const MachineFunction &MF) const override;

  bool requiresRegisterScavenging(const MachineFunction &MF) const override;

  bool trackLivenessAfterRegAlloc(const MachineFunction &MF) const override;

  /// Stack Frame Processing Methods
  void eliminateFrameIndex(MachineBasicBlock::iterator II,
                           int SPAdj, unsigned FIOperandNum,
                           RegScavenger *RS = nullptr) const override;

  /// Debug information queries.
  Register getFrameRegister(const MachineFunction &MF) const override;

  /// \brief Return GPR register class.
  virtual const TargetRegisterClass *intRegClass(unsigned Size) const = 0;
};

} // end namespace llvm

#endif
