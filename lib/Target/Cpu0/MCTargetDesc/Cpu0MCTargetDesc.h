
#ifndef LLVM_LIB_TARGET_CPU0_MCTARGETDESC_CPU0MCTARGETDESC_H
#define LLVM_LIB_TARGET_CPU0_MCTARGETDESC_CPU0MCTARGETDESC_H

#include "llvm/Support/DataTypes.h"

#include <memory>

namespace llvm {
class MCAsmBackend;
class MCCodeEmitter;
class MCContext;
class MCInstrInfo;
class MCObjectTargetWriter;
class MCRegisterInfo;
class MCSubtargetInfo;
class MCTargetOptions;
class Target;
class Triple;
class StringRef;
class raw_pwrite_stream;
class raw_ostream;



extern Target TheCpu0Target;
extern Target TheCpu0elTarget;

MCCodeEmitter *createCpu0MCCodeEmitterEB(const MCInstrInfo &MCII,
                                         const MCRegisterInfo &MRI,
                                         MCContext &Ctx);
MCCodeEmitter *createCpu0MCCodeEmitterEL(const MCInstrInfo &MCII,
                                         const MCRegisterInfo &MRI,
                                         MCContext &Ctx);

MCAsmBackend *createCpu0AsmBackendEB32(const Target &T, const MCSubtargetInfo &STI,
                                       const MCRegisterInfo &MRI,
                                       const MCTargetOptions &Options);
MCAsmBackend *createCpu0AsmBackendEL32(const Target &T, const MCSubtargetInfo &STI,
                                       const MCRegisterInfo &MRI,
                                       const MCTargetOptions &Options);

std::unique_ptr<MCObjectTargetWriter> createCpu0ELFObjectWriter(uint8_t OSABI,
                                          bool IsLittleEndian);

// std::unique_ptr<MCObjectTargetWriter>
// createMipsELFObjectWriter(const Triple &TT, bool IsN32);



// MCCodeEmitter *createMipsMCCodeEmitterEB(const MCInstrInfo &MCII,
//                                          const MCRegisterInfo &MRI,
//                                          MCContext &Ctx);
// MCCodeEmitter *createMipsMCCodeEmitterEL(const MCInstrInfo &MCII,
//                                          const MCRegisterInfo &MRI,
//                                          MCContext &Ctx);

// MCAsmBackend *createCpu0AsmBackend(const Target &T, const MCSubtargetInfo &STI,
//                                    const MCRegisterInfo &MRI,
//                                    const MCTargetOptions &Options);
} // End llvm namespace

// Defines symbolic names for Cpu0 registers.  This defines a mapping from
// register name to register number.
//
#define GET_REGINFO_ENUM
#include "Cpu0GenRegisterInfo.inc"

// Defines symbolic names for the Cpu0 instructions.
//
#define GET_INSTRINFO_ENUM
#include "Cpu0GenInstrInfo.inc"

#define GET_SUBTARGETINFO_ENUM
#include "Cpu0GenSubtargetInfo.inc"

#endif

