
// #include "Cpu0TargetObjectFile.h"
// #include "MCTargetDesc/Cpu0MCExpr.h"
// #include "llvm/BinaryFormat/Dwarf.h"
// #include "llvm/CodeGen/MachineModuleInfoImpls.h"
// #include "llvm/CodeGen/TargetLowering.h"


#include "Cpu0TargetObjectFile.h"
#include "Cpu0Subtarget.h"
#include "Cpu0TargetMachine.h"
#include "llvm/IR/DataLayout.h"
#include "llvm/IR/DerivedTypes.h"
#include "llvm/IR/GlobalVariable.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCSectionELF.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/BinaryFormat/ELF.h"
#include "llvm/Target/TargetMachine.h"

using namespace llvm;

static cl::opt<unsigned>
SSThreshold("cpu0-ssection-threshold", cl::Hidden,
            cl::desc("Small data and bss section threshold size (default=8)"),
            cl::init(8));

void Cpu0TargetObjectFile::Initialize(MCContext &Ctx,
                                          const TargetMachine &TM) {
  TargetLoweringObjectFileELF::Initialize(Ctx, TM);
  InitializeELF(TM.Options.UseInitArray);

  SmallDataSection = getContext().getELFSection(
      ".sdata", ELF::SHT_PROGBITS, ELF::SHF_WRITE | ELF::SHF_ALLOC);

  SmallBSSSection = getContext().getELFSection(".sbss", ELF::SHT_NOBITS,
                                               ELF::SHF_WRITE | ELF::SHF_ALLOC);
  this->TM = &static_cast<const Cpu0TargetMachine &>(TM);
}
// A address must be loaded from a small section if its size is less than the
// small section size threshold. Data in this section must be addressed using
// gp_rel operator.
static bool IsInSmallSection(uint64_t Size) {
  return Size > 0 && Size <= SSThreshold;
}

// bool Cpu0TargetObjectFile::IsGlobalInSmallSection(const GlobalValue *GV,
//                                                 const TargetMachine &TM) const {
//   if (GV->isDeclaration() || GV->hasAvailableExternallyLinkage())
//     return false;

//   return IsGlobalInSmallSection(GV, TM, getKindForGlobal(GV, TM));
// }

bool Cpu0TargetObjectFile::IsGlobalInSmallSection(
    const GlobalObject *GO, const TargetMachine &TM) const {
  // We first check the case where global is a declaration, because finding
  // section kind using getKindForGlobal() is only allowed for global
  // definitions.
  if (GO->isDeclaration() || GO->hasAvailableExternallyLinkage())
    return false; //IsGlobalInSmallSectionImpl(GO, TM);

  return IsGlobalInSmallSection(GO, TM, getKindForGlobal(GO, TM));
}


/// IsGlobalInSmallSection - Return true if this global address should be
/// placed into small data/bss section.
// bool Cpu0TargetObjectFile::
// IsGlobalInSmallSection(const GlobalValue *GV, const TargetMachine &TM,
//                        SectionKind Kind) const {
//   return (IsGlobalInSmallSectionImpl(GV, TM) &&
//           (Kind.isData() || Kind.isBSS() || Kind.isCommon()));
// }

bool Cpu0TargetObjectFile::
IsGlobalInSmallSection(const GlobalObject *GO, const TargetMachine &TM,
                       SectionKind Kind) const {
  return IsGlobalInSmallSectionImpl(GO, TM) &&
         (Kind.isData() || Kind.isBSS() || Kind.isCommon() ||
          Kind.isReadOnly());
}

/// Return true if this global address should be placed into small data/bss
/// section. This method does all the work, except for checking the section
/// kind.
// bool Cpu0TargetObjectFile::
// IsGlobalInSmallSectionImpl(const GlobalValue *GV,
//                            const TargetMachine &TM) const {
//   const Cpu0Subtarget &Subtarget =
//       *static_cast<const Cpu0TargetMachine &>(TM).getSubtargetImpl();

//   // Return if small section is not available.
//   if (!Subtarget.useSmallSection())
//     return false;

//   // Only global variables, not functions.
//   const GlobalVariable *GVA = dyn_cast<GlobalVariable>(GV);
//   if (!GVA)
//     return false;

//   Type *Ty = GV->getValueType();
//   return IsInSmallSection(
//       GV->getParent()->getDataLayout().getTypeAllocSize(Ty));
// }

bool Cpu0TargetObjectFile::
IsGlobalInSmallSectionImpl(const GlobalObject *GO,
                           const TargetMachine &TM) const {

  const Cpu0Subtarget &Subtarget =
      *static_cast<const Cpu0TargetMachine &>(TM).getSubtargetImpl();

  // Return if small section is not available.
  if (!Subtarget.useSmallSection())
    return false;

  // Only global variables, not functions.
  const GlobalVariable *GVA = dyn_cast<GlobalVariable>(GO);
  if (!GVA)
    return false;

  Type *Ty = GVA->getValueType();
  return IsInSmallSection(
      GVA->getParent()->getDataLayout().getTypeAllocSize(Ty));

}


// MCSection *
// Cpu0TargetObjectFile::SelectSectionForGlobal(const GlobalObject *GO, SectionKind Kind,
//                                     const TargetMachine &TM) const {
//   // TODO: Could also support "weak" symbols as well with ".gnu.linkonce.s.*"
//   // sections?

//   // Handle Small Section classification here.
//   if (Kind.isBSS() && IsGlobalInSmallSection(GV, TM, Kind))
//     return SmallBSSSection;
//   if (Kind.isData() && IsGlobalInSmallSection(GV, TM, Kind))
//     return SmallDataSection;

//   // Otherwise, we work the same as ELF.
//   return TargetLoweringObjectFileELF::SelectSectionForGlobal(GV, Kind, Mang,TM);
// }

MCSection *Cpu0TargetObjectFile::SelectSectionForGlobal(
    const GlobalObject *GO, SectionKind Kind, const TargetMachine &TM) const {
  // TODO: Could also support "weak" symbols as well with ".gnu.linkonce.s.*"
  // sections?

  // Handle Small Section classification here.
  if (Kind.isBSS() && IsGlobalInSmallSection(GO, TM, Kind))
    return SmallBSSSection;
  if (Kind.isData() && IsGlobalInSmallSection(GO, TM, Kind))
    return SmallDataSection;
  if (Kind.isReadOnly() && IsGlobalInSmallSection(GO, TM, Kind))
    return SmallDataSection;

  // Otherwise, we work the same as ELF.
  return TargetLoweringObjectFileELF::SelectSectionForGlobal(GO, Kind, TM);
}



// const MCExpr *Cpu0ELFTargetObjectFile::getTTypeGlobalReference(
//     const GlobalValue *GV, unsigned Encoding, const TargetMachine &TM,
//     MachineModuleInfo *MMI, MCStreamer &Streamer) const {

//   if (Encoding & dwarf::DW_EH_PE_pcrel) {
//     MachineModuleInfoELF &ELFMMI = MMI->getObjFileInfo<MachineModuleInfoELF>();

//     MCSymbol *SSym = getSymbolWithGlobalValueBase(GV, ".DW.stub", TM);

//     // Add information about the stub reference to ELFMMI so that the stub
//     // gets emitted by the asmprinter.
//     MachineModuleInfoImpl::StubValueTy &StubSym = ELFMMI.getGVStubEntry(SSym);
//     if (!StubSym.getPointer()) {
//       MCSymbol *Sym = TM.getSymbol(GV);
//       StubSym = MachineModuleInfoImpl::StubValueTy(Sym, !GV->hasLocalLinkage());
//     }

//     MCContext &Ctx = getContext();
//     return Cpu0MCExpr::create(Cpu0MCExpr::VK_Cpu0_R_DISP32,
//                                MCSymbolRefExpr::create(SSym, Ctx), Ctx);
//   }

//   return TargetLoweringObjectFileELF::getTTypeGlobalReference(GV, Encoding, TM,
//                                                               MMI, Streamer);
// }
