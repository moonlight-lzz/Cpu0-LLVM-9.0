//===-- MipsTargetStreamer.h - Mips Target Streamer ------------*- C++ -*--===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_CPU0_CPU0TARGETSTREAMER_H
#define LLVM_LIB_TARGET_CPU0_CPU0TARGETSTREAMER_H

//#include "MCTargetDesc/Cpu0ABIFlagsSection.h"
#include "MCTargetDesc/Cpu0ABIInfo.h"
#include "llvm/ADT/Optional.h"
#include "llvm/ADT/STLExtras.h"
#include "llvm/MC/MCELFStreamer.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCStreamer.h"

namespace llvm {

  //struct Cpu0ABIFlagsSection;

class Cpu0TargetStreamer : public MCTargetStreamer {
public:
  Cpu0TargetStreamer(MCStreamer &S);

  
};

// This part is for ascii assembly output
class Cpu0TargetAsmStreamer : public Cpu0TargetStreamer {
  formatted_raw_ostream &OS;

public:
  Cpu0TargetAsmStreamer(MCStreamer &S, formatted_raw_ostream &OS);
  
};

// This part is for ELF object output
class Cpu0TargetELFStreamer : public Cpu0TargetStreamer {
  
  const MCSubtargetInfo &STI;
  

public:
  
  MCELFStreamer &getStreamer();
  Cpu0TargetELFStreamer(MCStreamer &S, const MCSubtargetInfo &STI);

 
};



}
#endif
