//===-- Cpu0InstPrinter.cpp - Convert Cpu0 MCInst to assembly syntax ------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This class prints an Cpu0 MCInst to a .s file.
//
//===----------------------------------------------------------------------===//

#include "Cpu0InstPrinter.h"
#include "Cpu0MCExpr.h"
#include "Cpu0InstrInfo.h"
#include "llvm/ADT/StringExtras.h"
#include "llvm/MC/MCExpr.h"
#include "llvm/MC/MCInst.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCSymbol.h"
#include "llvm/Support/ErrorHandling.h"
#include "llvm/Support/raw_ostream.h"

#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCSubtargetInfo.h"
using namespace llvm;

#define DEBUG_TYPE "asm-printer"

#define PRINT_ALIAS_INSTR
#include "Cpu0GenAsmWriter.inc"

void Cpu0InstPrinter::printRegName(raw_ostream &OS, unsigned RegNo) const {
//- getRegisterName(RegNo) defined in Cpu0GenAsmWriter.inc which indicate in 
//   Cpu0.td.
  OS << '$' << StringRef(getRegisterName(RegNo)).lower();
}

//@1 {
void Cpu0InstPrinter::printInst(const MCInst *MI, raw_ostream &O,
                                StringRef Annot, const MCSubtargetInfo &STI) {
  // Try to print any aliases first.
  if (!printAliasInstr(MI, O))
//@1 }
    //- printInstruction(MI, O) defined in Cpu0GenAsmWriter.inc which came from 
    //   Cpu0.td indicate.
    printInstruction(MI, O);
  printAnnotation(O, Annot);
}

void Cpu0InstPrinter::printOperand(const MCInst *MI, unsigned OpNo,
                                   raw_ostream &O) {
  const MCOperand &Op = MI->getOperand(OpNo);
  if (Op.isReg()) {
    printRegName(O, Op.getReg());
    return;
  }

  if (Op.isImm()) {
    O << Op.getImm();
    return;
  }

  assert(Op.isExpr() && "unknown operand kind in printOperand");
  Op.getExpr()->print(O, &MAI, true);
}

void Cpu0InstPrinter::printUnsignedImm(const MCInst *MI, int opNum,
                                       raw_ostream &O) {
  const MCOperand &MO = MI->getOperand(opNum);
  if (MO.isImm())
    O << (unsigned short int)MO.getImm();
  else
    printOperand(MI, opNum, O);
}

void Cpu0InstPrinter::
printMemOperand(const MCInst *MI, int opNum, raw_ostream &O) {
  // Load/Store memory operands -- imm($reg)
  // If PIC target the target is loaded as the
  // pattern ld $t9,%call16($gp)
  printOperand(MI, opNum+1, O);
  O << "(";
  printOperand(MI, opNum, O);
  O << ")";
}

//#if CH >= CH7_1
// The DAG data node, mem_ea of Cpu0InstrInfo.td, cannot be disabled by
// ch7_1, only opcode node can be disabled.
void Cpu0InstPrinter::
printMemOperandEA(const MCInst *MI, int opNum, raw_ostream &O) {
  // when using stack locations for not load/store instructions
  // print the same way as all normal 3 operand instructions.
  printOperand(MI, opNum, O);
  O << ", ";
  printOperand(MI, opNum+1, O);
  return;
}
//#endif

// ****************************************sparc************************************************
// bool SparcInstPrinter::isV9(const MCSubtargetInfo &STI) const {
//   return (STI.getFeatureBits()[Sparc::FeatureV9]) != 0;
// }

// void SparcInstPrinter::printRegName(raw_ostream &OS, unsigned RegNo) const
// {
//   OS << '%' << StringRef(getRegisterName(RegNo)).lower();
// }

// void SparcInstPrinter::printInst(const MCInst *MI, raw_ostream &O,
//                                  StringRef Annot, const MCSubtargetInfo &STI) {
//   if (!printAliasInstr(MI, STI, O) && !printSparcAliasInstr(MI, STI, O))
//     printInstruction(MI, STI, O);
//   printAnnotation(O, Annot);
// }

// bool SparcInstPrinter::printSparcAliasInstr(const MCInst *MI,
//                                             const MCSubtargetInfo &STI,
//                                             raw_ostream &O) {
//   switch (MI->getOpcode()) {
//   default: return false;
//   case SP::JMPLrr:
//   case SP::JMPLri: {
//     if (MI->getNumOperands() != 3)
//       return false;
//     if (!MI->getOperand(0).isReg())
//       return false;
//     switch (MI->getOperand(0).getReg()) {
//     default: return false;
//     case SP::G0: // jmp $addr | ret | retl
//       if (MI->getOperand(2).isImm() &&
//           MI->getOperand(2).getImm() == 8) {
//         switch(MI->getOperand(1).getReg()) {
//         default: break;
//         case SP::I7: O << "\tret"; return true;
//         case SP::O7: O << "\tretl"; return true;
//         }
//       }
//       O << "\tjmp "; printMemOperand(MI, 1, STI, O);
//       return true;
//     case SP::O7: // call $addr
//       O << "\tcall "; printMemOperand(MI, 1, STI, O);
//       return true;
//     }
//   }
//   case SP::V9FCMPS:  case SP::V9FCMPD:  case SP::V9FCMPQ:
//   case SP::V9FCMPES: case SP::V9FCMPED: case SP::V9FCMPEQ: {
//     if (isV9(STI)
//         || (MI->getNumOperands() != 3)
//         || (!MI->getOperand(0).isReg())
//         || (MI->getOperand(0).getReg() != SP::FCC0))
//       return false;
//     // if V8, skip printing %fcc0.
//     switch(MI->getOpcode()) {
//     default:
//     case SP::V9FCMPS:  O << "\tfcmps "; break;
//     case SP::V9FCMPD:  O << "\tfcmpd "; break;
//     case SP::V9FCMPQ:  O << "\tfcmpq "; break;
//     case SP::V9FCMPES: O << "\tfcmpes "; break;
//     case SP::V9FCMPED: O << "\tfcmped "; break;
//     case SP::V9FCMPEQ: O << "\tfcmpeq "; break;
//     }
//     printOperand(MI, 1, STI, O);
//     O << ", ";
//     printOperand(MI, 2, STI, O);
//     return true;
//   }
//   }
// }

// void SparcInstPrinter::printOperand(const MCInst *MI, int opNum,
//                                     const MCSubtargetInfo &STI,
//                                     raw_ostream &O) {
//   const MCOperand &MO = MI->getOperand (opNum);

//   if (MO.isReg()) {
//     printRegName(O, MO.getReg());
//     return ;
//   }

//   if (MO.isImm()) {
//     switch (MI->getOpcode()) {
//       default:
//         O << (int)MO.getImm();
//         return;

//       case SP::TICCri: // Fall through
//       case SP::TICCrr: // Fall through
//       case SP::TRAPri: // Fall through
//       case SP::TRAPrr: // Fall through
//       case SP::TXCCri: // Fall through
//       case SP::TXCCrr: // Fall through
//         // Only seven-bit values up to 127.
//         O << ((int) MO.getImm() & 0x7f);
//         return;
//     }
//   }

//   assert(MO.isExpr() && "Unknown operand kind in printOperand");
//   MO.getExpr()->print(O, &MAI);
// }

// void SparcInstPrinter::printMemOperand(const MCInst *MI, int opNum,
//                                        const MCSubtargetInfo &STI,
//                                        raw_ostream &O, const char *Modifier) {
//   printOperand(MI, opNum, STI, O);

//   // If this is an ADD operand, emit it like normal operands.
//   if (Modifier && !strcmp(Modifier, "arith")) {
//     O << ", ";
//     printOperand(MI, opNum+1, STI, O);
//     return;
//   }
//   const MCOperand &MO = MI->getOperand(opNum+1);

//   if (MO.isReg() && MO.getReg() == SP::G0)
//     return;   // don't print "+%g0"
//   if (MO.isImm() && MO.getImm() == 0)
//     return;   // don't print "+0"

//   O << "+";

//   printOperand(MI, opNum+1, STI, O);
// }

// void SparcInstPrinter::printCCOperand(const MCInst *MI, int opNum,
//                                       const MCSubtargetInfo &STI,
//                                       raw_ostream &O) {
//   int CC = (int)MI->getOperand(opNum).getImm();
//   switch (MI->getOpcode()) {
//   default: break;
//   case SP::FBCOND:
//   case SP::FBCONDA:
//   case SP::BPFCC:
//   case SP::BPFCCA:
//   case SP::BPFCCNT:
//   case SP::BPFCCANT:
//   case SP::MOVFCCrr:  case SP::V9MOVFCCrr:
//   case SP::MOVFCCri:  case SP::V9MOVFCCri:
//   case SP::FMOVS_FCC: case SP::V9FMOVS_FCC:
//   case SP::FMOVD_FCC: case SP::V9FMOVD_FCC:
//   case SP::FMOVQ_FCC: case SP::V9FMOVQ_FCC:
//     // Make sure CC is a fp conditional flag.
//     CC = (CC < 16) ? (CC + 16) : CC;
//     break;
//   case SP::CBCOND:
//   case SP::CBCONDA:
//     // Make sure CC is a cp conditional flag.
//     CC = (CC < 32) ? (CC + 32) : CC;
//     break;
//   }
//   O << SPARCCondCodeToString((SPCC::CondCodes)CC);
// }

// bool SparcInstPrinter::printGetPCX(const MCInst *MI, unsigned opNum,
//                                    const MCSubtargetInfo &STI,
//                                    raw_ostream &O) {
//   llvm_unreachable("FIXME: Implement SparcInstPrinter::printGetPCX.");
//   return true;
// }

// void SparcInstPrinter::printMembarTag(const MCInst *MI, int opNum,
//                                       const MCSubtargetInfo &STI,
//                                       raw_ostream &O) {
//   static const char *const TagNames[] = {
//       "#LoadLoad",  "#StoreLoad", "#LoadStore", "#StoreStore",
//       "#Lookaside", "#MemIssue",  "#Sync"};

//   unsigned Imm = MI->getOperand(opNum).getImm();

//   if (Imm > 127) {
//     O << Imm;
//     return;
//   }

//   bool First = true;
//   for (unsigned i = 0; i < sizeof(TagNames) / sizeof(char *); i++) {
//     if (Imm & (1 << i)) {
//       O << (First ? "" : " | ") << TagNames[i];
//       First = false;
//     }
//   }
// }

