//===- MipsELFStreamer.h - ELF Object Output --------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This is a custom MCELFStreamer which allows us to insert some hooks before
// emitting data into an actual object file.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_CPU0_MCTARGETDESC_CPU0ELFSTREAMER_H
#define LLVM_LIB_TARGET_CPU0_MCTARGETDESC_CPU0ELFSTREAMER_H

//#include "Cpu0OptionRecord.h"
#include "llvm/ADT/SmallVector.h"
#include "llvm/MC/MCELFStreamer.h"
#include <memory>

namespace llvm {

class MCAsmBackend;
class MCCodeEmitter;
class MCContext;
class MCSubtargetInfo;
struct MCDwarfFrameInfo;

class Cpu0ELFStreamer : public MCELFStreamer {
  /* SmallVector<std::unique_ptr<Cpu0OptionRecord>, 8> Cpu0OptionRecords; */
  /* Cpu0RegInfoRecord *RegInfoRecord; */
  /* SmallVector<MCSymbol*, 4> Labels; */

public:
  Cpu0ELFStreamer(MCContext &Context, std::unique_ptr<MCAsmBackend> MAB,
                  std::unique_ptr<MCObjectWriter> OW,
                  std::unique_ptr<MCCodeEmitter> Emitter);

  /* /// Overriding this function allows us to add arbitrary behaviour before the */
  /* /// \p Inst is actually emitted. For example, we can inspect the operands and */
  /* /// gather sufficient information that allows us to reason about the register */
  /* /// usage for the translation unit. */
  /* void EmitInstruction(const MCInst &Inst, const MCSubtargetInfo &STI) override; */

  /* /// Overriding this function allows us to record all labels that should be */
  /* /// marked as microCPU0. Based on this data marking is done in */
  /* /// EmitInstruction. */
  /* void EmitLabel(MCSymbol *Symbol, SMLoc Loc = SMLoc()) override; */

  /* /// Overriding this function allows us to dismiss all labels that are */
  /* /// candidates for marking as microCPU0 when .section directive is processed. */
  /* void SwitchSection(MCSection *Section, */
  /*                    const MCExpr *Subsection = nullptr) override; */

  /* /// Overriding these functions allows us to dismiss all labels that are */
  /* /// candidates for marking as microCPU0 when .word/.long/.4byte etc */
  /* /// directives are emitted. */
  /* void EmitValueImpl(const MCExpr *Value, unsigned Size, SMLoc Loc) override; */
  /* void EmitIntValue(uint64_t Value, unsigned Size) override; */

  /* // Overriding these functions allows us to avoid recording of these labels */
  /* // in EmitLabel and later marking them as microCPU0. */
  /* void EmitCFIStartProcImpl(MCDwarfFrameInfo &Frame) override; */
  /* void EmitCFIEndProcImpl(MCDwarfFrameInfo &Frame) override; */
  /* MCSymbol *EmitCFILabel() override; */

  /* /// Emits all the option records stored up until the point it's called. */
  /* void EmitCpu0OptionRecords(); */

  /* /// Mark labels as microCPU0, if necessary for the subtarget. */
  /* void createPendingLabelRelocs(); */
};

MCELFStreamer *createCpu0ELFStreamer(MCContext &Context,
                                     std::unique_ptr<MCAsmBackend> MAB,
                                     std::unique_ptr<MCObjectWriter> OW,
                                     std::unique_ptr<MCCodeEmitter> Emitter,
                                     bool RelaxAll);
} // end namespace llvm

#endif // LLVM_LIB_TARGET_CPU0_MCTARGETDESC_CPU0ELFSTREAMER_H
