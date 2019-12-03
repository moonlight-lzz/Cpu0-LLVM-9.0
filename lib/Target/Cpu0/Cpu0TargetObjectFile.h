#ifndef LLVM_LIB_TARGET_CPU0_CPU0TARGETOBJECTFILE_H
#define LLVM_LIB_TARGET_CPU0_CPU0TARGETOBJECTFILE_H

#include "llvm/CodeGen/TargetLoweringObjectFileImpl.h"
#include "Cpu0TargetMachine.h"

namespace llvm {

class MCContext;
class TargetMachine;

class Cpu0TargetObjectFile : public TargetLoweringObjectFileELF {
  MCSection *SmallDataSection;
  MCSection *SmallBSSSection;
  const Cpu0TargetMachine *TM;
public:
  Cpu0TargetObjectFile() :
      TargetLoweringObjectFileELF()
  {}

  void Initialize(MCContext &Ctx, const TargetMachine &TM) override;

  /// IsGlobalInSmallSection - Return true if this global address should be
  /// placed into small data/bss section.
  // bool IsGlobalInSmallSection(const GlobalValue *GV,
  //                             const TargetMachine &TM, SectionKind Kind) const;
  // bool IsGlobalInSmallSection(const GlobalValue *GV,
  //                             const TargetMachine &TM) const;
  // bool IsGlobalInSmallSectionImpl(const GlobalValue *GV,
  //                                 const TargetMachine &TM) const;

  bool IsGlobalInSmallSection(const GlobalObject *GO,
                              const TargetMachine &TM) const;
  bool IsGlobalInSmallSection(const GlobalObject *GO, const TargetMachine &TM, SectionKind Kind) const;
  bool IsGlobalInSmallSectionImpl(const GlobalObject *GO, const TargetMachine &TM) const;

  // MCSection *SelectSectionForGlobal(const GlobalValue *GV, SectionKind Kind,
  //                                   Mangler &Mang, const TargetMachine &TM) const override;
  MCSection *SelectSectionForGlobal(const GlobalObject *GO, SectionKind Kind,
                                    const TargetMachine &TM) const override;

  
};

} // end namespace llvm

#endif
