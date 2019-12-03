//===----------------------------------------------------------------------===//
//
// This file provides Cpu0 specific target streamer methods.
//
//===----------------------------------------------------------------------===//

#include "Cpu0InstPrinter.h"
#include "Cpu0MCTargetDesc.h"
#include "Cpu0TargetObjectFile.h"
#include "Cpu0TargetStreamer.h"
#include "llvm/MC/MCContext.h"
#include "llvm/MC/MCSectionELF.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/MCSymbolELF.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/BinaryFormat/ELF.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/FormattedStream.h"

using namespace llvm;

Cpu0TargetStreamer::Cpu0TargetStreamer(MCStreamer &S)
    : MCTargetStreamer(S) {
}

Cpu0TargetAsmStreamer::Cpu0TargetAsmStreamer(MCStreamer &S, formatted_raw_ostream &OS)
    : Cpu0TargetStreamer(S), OS(OS) {}

Cpu0TargetELFStreamer::Cpu0TargetELFStreamer(MCStreamer &S, const MCSubtargetInfo &STI)
    : Cpu0TargetStreamer(S), STI(STI) {}
