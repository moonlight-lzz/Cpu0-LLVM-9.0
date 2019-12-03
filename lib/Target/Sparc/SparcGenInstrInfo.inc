/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace SP {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_LABEL	= 14,
    REG_SEQUENCE	= 15,
    COPY	= 16,
    BUNDLE	= 17,
    LIFETIME_START	= 18,
    LIFETIME_END	= 19,
    STACKMAP	= 20,
    FENTRY_CALL	= 21,
    PATCHPOINT	= 22,
    LOAD_STACK_GUARD	= 23,
    STATEPOINT	= 24,
    LOCAL_ESCAPE	= 25,
    FAULTING_OP	= 26,
    PATCHABLE_OP	= 27,
    PATCHABLE_FUNCTION_ENTER	= 28,
    PATCHABLE_RET	= 29,
    PATCHABLE_FUNCTION_EXIT	= 30,
    PATCHABLE_TAIL_CALL	= 31,
    PATCHABLE_EVENT_CALL	= 32,
    PATCHABLE_TYPED_EVENT_CALL	= 33,
    ICALL_BRANCH_FUNNEL	= 34,
    G_ADD	= 35,
    G_SUB	= 36,
    G_MUL	= 37,
    G_SDIV	= 38,
    G_UDIV	= 39,
    G_SREM	= 40,
    G_UREM	= 41,
    G_AND	= 42,
    G_OR	= 43,
    G_XOR	= 44,
    G_IMPLICIT_DEF	= 45,
    G_PHI	= 46,
    G_FRAME_INDEX	= 47,
    G_GLOBAL_VALUE	= 48,
    G_EXTRACT	= 49,
    G_UNMERGE_VALUES	= 50,
    G_INSERT	= 51,
    G_MERGE_VALUES	= 52,
    G_BUILD_VECTOR	= 53,
    G_BUILD_VECTOR_TRUNC	= 54,
    G_CONCAT_VECTORS	= 55,
    G_PTRTOINT	= 56,
    G_INTTOPTR	= 57,
    G_BITCAST	= 58,
    G_INTRINSIC_TRUNC	= 59,
    G_INTRINSIC_ROUND	= 60,
    G_LOAD	= 61,
    G_SEXTLOAD	= 62,
    G_ZEXTLOAD	= 63,
    G_STORE	= 64,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 65,
    G_ATOMIC_CMPXCHG	= 66,
    G_ATOMICRMW_XCHG	= 67,
    G_ATOMICRMW_ADD	= 68,
    G_ATOMICRMW_SUB	= 69,
    G_ATOMICRMW_AND	= 70,
    G_ATOMICRMW_NAND	= 71,
    G_ATOMICRMW_OR	= 72,
    G_ATOMICRMW_XOR	= 73,
    G_ATOMICRMW_MAX	= 74,
    G_ATOMICRMW_MIN	= 75,
    G_ATOMICRMW_UMAX	= 76,
    G_ATOMICRMW_UMIN	= 77,
    G_FENCE	= 78,
    G_BRCOND	= 79,
    G_BRINDIRECT	= 80,
    G_INTRINSIC	= 81,
    G_INTRINSIC_W_SIDE_EFFECTS	= 82,
    G_ANYEXT	= 83,
    G_TRUNC	= 84,
    G_CONSTANT	= 85,
    G_FCONSTANT	= 86,
    G_VASTART	= 87,
    G_VAARG	= 88,
    G_SEXT	= 89,
    G_ZEXT	= 90,
    G_SHL	= 91,
    G_LSHR	= 92,
    G_ASHR	= 93,
    G_ICMP	= 94,
    G_FCMP	= 95,
    G_SELECT	= 96,
    G_UADDO	= 97,
    G_UADDE	= 98,
    G_USUBO	= 99,
    G_USUBE	= 100,
    G_SADDO	= 101,
    G_SADDE	= 102,
    G_SSUBO	= 103,
    G_SSUBE	= 104,
    G_UMULO	= 105,
    G_SMULO	= 106,
    G_UMULH	= 107,
    G_SMULH	= 108,
    G_FADD	= 109,
    G_FSUB	= 110,
    G_FMUL	= 111,
    G_FMA	= 112,
    G_FDIV	= 113,
    G_FREM	= 114,
    G_FPOW	= 115,
    G_FEXP	= 116,
    G_FEXP2	= 117,
    G_FLOG	= 118,
    G_FLOG2	= 119,
    G_FLOG10	= 120,
    G_FNEG	= 121,
    G_FPEXT	= 122,
    G_FPTRUNC	= 123,
    G_FPTOSI	= 124,
    G_FPTOUI	= 125,
    G_SITOFP	= 126,
    G_UITOFP	= 127,
    G_FABS	= 128,
    G_FCOPYSIGN	= 129,
    G_FCANONICALIZE	= 130,
    G_FMINNUM	= 131,
    G_FMAXNUM	= 132,
    G_FMINNUM_IEEE	= 133,
    G_FMAXNUM_IEEE	= 134,
    G_FMINIMUM	= 135,
    G_FMAXIMUM	= 136,
    G_GEP	= 137,
    G_PTR_MASK	= 138,
    G_SMIN	= 139,
    G_SMAX	= 140,
    G_UMIN	= 141,
    G_UMAX	= 142,
    G_BR	= 143,
    G_BRJT	= 144,
    G_INSERT_VECTOR_ELT	= 145,
    G_EXTRACT_VECTOR_ELT	= 146,
    G_SHUFFLE_VECTOR	= 147,
    G_CTTZ	= 148,
    G_CTTZ_ZERO_UNDEF	= 149,
    G_CTLZ	= 150,
    G_CTLZ_ZERO_UNDEF	= 151,
    G_CTPOP	= 152,
    G_BSWAP	= 153,
    G_FCEIL	= 154,
    G_FCOS	= 155,
    G_FSIN	= 156,
    G_FSQRT	= 157,
    G_FFLOOR	= 158,
    G_FRINT	= 159,
    G_FNEARBYINT	= 160,
    G_ADDRSPACE_CAST	= 161,
    G_BLOCK_ADDR	= 162,
    G_JUMP_TABLE	= 163,
    ADJCALLSTACKDOWN	= 164,
    ADJCALLSTACKUP	= 165,
    GETPCX	= 166,
    SELECT_CC_DFP_FCC	= 167,
    SELECT_CC_DFP_ICC	= 168,
    SELECT_CC_FP_FCC	= 169,
    SELECT_CC_FP_ICC	= 170,
    SELECT_CC_Int_FCC	= 171,
    SELECT_CC_Int_ICC	= 172,
    SELECT_CC_QFP_FCC	= 173,
    SELECT_CC_QFP_ICC	= 174,
    SET	= 175,
    ADDCCri	= 176,
    ADDCCrr	= 177,
    ADDCri	= 178,
    ADDCrr	= 179,
    ADDEri	= 180,
    ADDErr	= 181,
    ADDXC	= 182,
    ADDXCCC	= 183,
    ADDXri	= 184,
    ADDXrr	= 185,
    ADDri	= 186,
    ADDrr	= 187,
    ALIGNADDR	= 188,
    ALIGNADDRL	= 189,
    ANDCCri	= 190,
    ANDCCrr	= 191,
    ANDNCCri	= 192,
    ANDNCCrr	= 193,
    ANDNri	= 194,
    ANDNrr	= 195,
    ANDXNrr	= 196,
    ANDXri	= 197,
    ANDXrr	= 198,
    ANDri	= 199,
    ANDrr	= 200,
    ARRAY16	= 201,
    ARRAY32	= 202,
    ARRAY8	= 203,
    BA	= 204,
    BCOND	= 205,
    BCONDA	= 206,
    BINDri	= 207,
    BINDrr	= 208,
    BMASK	= 209,
    BPFCC	= 210,
    BPFCCA	= 211,
    BPFCCANT	= 212,
    BPFCCNT	= 213,
    BPGEZapn	= 214,
    BPGEZapt	= 215,
    BPGEZnapn	= 216,
    BPGEZnapt	= 217,
    BPGZapn	= 218,
    BPGZapt	= 219,
    BPGZnapn	= 220,
    BPGZnapt	= 221,
    BPICC	= 222,
    BPICCA	= 223,
    BPICCANT	= 224,
    BPICCNT	= 225,
    BPLEZapn	= 226,
    BPLEZapt	= 227,
    BPLEZnapn	= 228,
    BPLEZnapt	= 229,
    BPLZapn	= 230,
    BPLZapt	= 231,
    BPLZnapn	= 232,
    BPLZnapt	= 233,
    BPNZapn	= 234,
    BPNZapt	= 235,
    BPNZnapn	= 236,
    BPNZnapt	= 237,
    BPXCC	= 238,
    BPXCCA	= 239,
    BPXCCANT	= 240,
    BPXCCNT	= 241,
    BPZapn	= 242,
    BPZapt	= 243,
    BPZnapn	= 244,
    BPZnapt	= 245,
    BSHUFFLE	= 246,
    CALL	= 247,
    CALLri	= 248,
    CALLrr	= 249,
    CASAasi10	= 250,
    CASArr	= 251,
    CASXrr	= 252,
    CASrr	= 253,
    CBCOND	= 254,
    CBCONDA	= 255,
    CMASK16	= 256,
    CMASK32	= 257,
    CMASK8	= 258,
    CMPri	= 259,
    CMPrr	= 260,
    EDGE16	= 261,
    EDGE16L	= 262,
    EDGE16LN	= 263,
    EDGE16N	= 264,
    EDGE32	= 265,
    EDGE32L	= 266,
    EDGE32LN	= 267,
    EDGE32N	= 268,
    EDGE8	= 269,
    EDGE8L	= 270,
    EDGE8LN	= 271,
    EDGE8N	= 272,
    FABSD	= 273,
    FABSQ	= 274,
    FABSS	= 275,
    FADDD	= 276,
    FADDQ	= 277,
    FADDS	= 278,
    FALIGNADATA	= 279,
    FAND	= 280,
    FANDNOT1	= 281,
    FANDNOT1S	= 282,
    FANDNOT2	= 283,
    FANDNOT2S	= 284,
    FANDS	= 285,
    FBCOND	= 286,
    FBCONDA	= 287,
    FCHKSM16	= 288,
    FCMPD	= 289,
    FCMPEQ16	= 290,
    FCMPEQ32	= 291,
    FCMPGT16	= 292,
    FCMPGT32	= 293,
    FCMPLE16	= 294,
    FCMPLE32	= 295,
    FCMPNE16	= 296,
    FCMPNE32	= 297,
    FCMPQ	= 298,
    FCMPS	= 299,
    FDIVD	= 300,
    FDIVQ	= 301,
    FDIVS	= 302,
    FDMULQ	= 303,
    FDTOI	= 304,
    FDTOQ	= 305,
    FDTOS	= 306,
    FDTOX	= 307,
    FEXPAND	= 308,
    FHADDD	= 309,
    FHADDS	= 310,
    FHSUBD	= 311,
    FHSUBS	= 312,
    FITOD	= 313,
    FITOQ	= 314,
    FITOS	= 315,
    FLCMPD	= 316,
    FLCMPS	= 317,
    FLUSH	= 318,
    FLUSHW	= 319,
    FLUSHri	= 320,
    FLUSHrr	= 321,
    FMEAN16	= 322,
    FMOVD	= 323,
    FMOVD_FCC	= 324,
    FMOVD_ICC	= 325,
    FMOVD_XCC	= 326,
    FMOVQ	= 327,
    FMOVQ_FCC	= 328,
    FMOVQ_ICC	= 329,
    FMOVQ_XCC	= 330,
    FMOVRGEZD	= 331,
    FMOVRGEZQ	= 332,
    FMOVRGEZS	= 333,
    FMOVRGZD	= 334,
    FMOVRGZQ	= 335,
    FMOVRGZS	= 336,
    FMOVRLEZD	= 337,
    FMOVRLEZQ	= 338,
    FMOVRLEZS	= 339,
    FMOVRLZD	= 340,
    FMOVRLZQ	= 341,
    FMOVRLZS	= 342,
    FMOVRNZD	= 343,
    FMOVRNZQ	= 344,
    FMOVRNZS	= 345,
    FMOVRZD	= 346,
    FMOVRZQ	= 347,
    FMOVRZS	= 348,
    FMOVS	= 349,
    FMOVS_FCC	= 350,
    FMOVS_ICC	= 351,
    FMOVS_XCC	= 352,
    FMUL8SUX16	= 353,
    FMUL8ULX16	= 354,
    FMUL8X16	= 355,
    FMUL8X16AL	= 356,
    FMUL8X16AU	= 357,
    FMULD	= 358,
    FMULD8SUX16	= 359,
    FMULD8ULX16	= 360,
    FMULQ	= 361,
    FMULS	= 362,
    FNADDD	= 363,
    FNADDS	= 364,
    FNAND	= 365,
    FNANDS	= 366,
    FNEGD	= 367,
    FNEGQ	= 368,
    FNEGS	= 369,
    FNHADDD	= 370,
    FNHADDS	= 371,
    FNMULD	= 372,
    FNMULS	= 373,
    FNOR	= 374,
    FNORS	= 375,
    FNOT1	= 376,
    FNOT1S	= 377,
    FNOT2	= 378,
    FNOT2S	= 379,
    FNSMULD	= 380,
    FONE	= 381,
    FONES	= 382,
    FOR	= 383,
    FORNOT1	= 384,
    FORNOT1S	= 385,
    FORNOT2	= 386,
    FORNOT2S	= 387,
    FORS	= 388,
    FPACK16	= 389,
    FPACK32	= 390,
    FPACKFIX	= 391,
    FPADD16	= 392,
    FPADD16S	= 393,
    FPADD32	= 394,
    FPADD32S	= 395,
    FPADD64	= 396,
    FPMERGE	= 397,
    FPSUB16	= 398,
    FPSUB16S	= 399,
    FPSUB32	= 400,
    FPSUB32S	= 401,
    FQTOD	= 402,
    FQTOI	= 403,
    FQTOS	= 404,
    FQTOX	= 405,
    FSLAS16	= 406,
    FSLAS32	= 407,
    FSLL16	= 408,
    FSLL32	= 409,
    FSMULD	= 410,
    FSQRTD	= 411,
    FSQRTQ	= 412,
    FSQRTS	= 413,
    FSRA16	= 414,
    FSRA32	= 415,
    FSRC1	= 416,
    FSRC1S	= 417,
    FSRC2	= 418,
    FSRC2S	= 419,
    FSRL16	= 420,
    FSRL32	= 421,
    FSTOD	= 422,
    FSTOI	= 423,
    FSTOQ	= 424,
    FSTOX	= 425,
    FSUBD	= 426,
    FSUBQ	= 427,
    FSUBS	= 428,
    FXNOR	= 429,
    FXNORS	= 430,
    FXOR	= 431,
    FXORS	= 432,
    FXTOD	= 433,
    FXTOQ	= 434,
    FXTOS	= 435,
    FZERO	= 436,
    FZEROS	= 437,
    JMPLri	= 438,
    JMPLrr	= 439,
    LDArr	= 440,
    LDCSRri	= 441,
    LDCSRrr	= 442,
    LDCri	= 443,
    LDCrr	= 444,
    LDDArr	= 445,
    LDDCri	= 446,
    LDDCrr	= 447,
    LDDFArr	= 448,
    LDDFri	= 449,
    LDDFrr	= 450,
    LDDri	= 451,
    LDDrr	= 452,
    LDFArr	= 453,
    LDFSRri	= 454,
    LDFSRrr	= 455,
    LDFri	= 456,
    LDFrr	= 457,
    LDQFArr	= 458,
    LDQFri	= 459,
    LDQFrr	= 460,
    LDSBArr	= 461,
    LDSBri	= 462,
    LDSBrr	= 463,
    LDSHArr	= 464,
    LDSHri	= 465,
    LDSHrr	= 466,
    LDSTUBArr	= 467,
    LDSTUBri	= 468,
    LDSTUBrr	= 469,
    LDSWri	= 470,
    LDSWrr	= 471,
    LDUBArr	= 472,
    LDUBri	= 473,
    LDUBrr	= 474,
    LDUHArr	= 475,
    LDUHri	= 476,
    LDUHrr	= 477,
    LDXFSRri	= 478,
    LDXFSRrr	= 479,
    LDXri	= 480,
    LDXrr	= 481,
    LDri	= 482,
    LDrr	= 483,
    LEAX_ADDri	= 484,
    LEA_ADDri	= 485,
    LZCNT	= 486,
    MEMBARi	= 487,
    MOVDTOX	= 488,
    MOVFCCri	= 489,
    MOVFCCrr	= 490,
    MOVICCri	= 491,
    MOVICCrr	= 492,
    MOVRGEZri	= 493,
    MOVRGEZrr	= 494,
    MOVRGZri	= 495,
    MOVRGZrr	= 496,
    MOVRLEZri	= 497,
    MOVRLEZrr	= 498,
    MOVRLZri	= 499,
    MOVRLZrr	= 500,
    MOVRNZri	= 501,
    MOVRNZrr	= 502,
    MOVRRZri	= 503,
    MOVRRZrr	= 504,
    MOVSTOSW	= 505,
    MOVSTOUW	= 506,
    MOVWTOS	= 507,
    MOVXCCri	= 508,
    MOVXCCrr	= 509,
    MOVXTOD	= 510,
    MULSCCri	= 511,
    MULSCCrr	= 512,
    MULXri	= 513,
    MULXrr	= 514,
    NOP	= 515,
    ORCCri	= 516,
    ORCCrr	= 517,
    ORNCCri	= 518,
    ORNCCrr	= 519,
    ORNri	= 520,
    ORNrr	= 521,
    ORXNrr	= 522,
    ORXri	= 523,
    ORXrr	= 524,
    ORri	= 525,
    ORrr	= 526,
    PDIST	= 527,
    PDISTN	= 528,
    POPCrr	= 529,
    PWRPSRri	= 530,
    PWRPSRrr	= 531,
    RDASR	= 532,
    RDPR	= 533,
    RDPSR	= 534,
    RDTBR	= 535,
    RDWIM	= 536,
    RESTOREri	= 537,
    RESTORErr	= 538,
    RET	= 539,
    RETL	= 540,
    RETTri	= 541,
    RETTrr	= 542,
    SAVEri	= 543,
    SAVErr	= 544,
    SDIVCCri	= 545,
    SDIVCCrr	= 546,
    SDIVXri	= 547,
    SDIVXrr	= 548,
    SDIVri	= 549,
    SDIVrr	= 550,
    SETHIXi	= 551,
    SETHIi	= 552,
    SHUTDOWN	= 553,
    SIAM	= 554,
    SLLXri	= 555,
    SLLXrr	= 556,
    SLLri	= 557,
    SLLrr	= 558,
    SMACri	= 559,
    SMACrr	= 560,
    SMULCCri	= 561,
    SMULCCrr	= 562,
    SMULri	= 563,
    SMULrr	= 564,
    SRAXri	= 565,
    SRAXrr	= 566,
    SRAri	= 567,
    SRArr	= 568,
    SRLXri	= 569,
    SRLXrr	= 570,
    SRLri	= 571,
    SRLrr	= 572,
    STArr	= 573,
    STBAR	= 574,
    STBArr	= 575,
    STBri	= 576,
    STBrr	= 577,
    STCSRri	= 578,
    STCSRrr	= 579,
    STCri	= 580,
    STCrr	= 581,
    STDArr	= 582,
    STDCQri	= 583,
    STDCQrr	= 584,
    STDCri	= 585,
    STDCrr	= 586,
    STDFArr	= 587,
    STDFQri	= 588,
    STDFQrr	= 589,
    STDFri	= 590,
    STDFrr	= 591,
    STDri	= 592,
    STDrr	= 593,
    STFArr	= 594,
    STFSRri	= 595,
    STFSRrr	= 596,
    STFri	= 597,
    STFrr	= 598,
    STHArr	= 599,
    STHri	= 600,
    STHrr	= 601,
    STQFArr	= 602,
    STQFri	= 603,
    STQFrr	= 604,
    STXFSRri	= 605,
    STXFSRrr	= 606,
    STXri	= 607,
    STXrr	= 608,
    STri	= 609,
    STrr	= 610,
    SUBCCri	= 611,
    SUBCCrr	= 612,
    SUBCri	= 613,
    SUBCrr	= 614,
    SUBEri	= 615,
    SUBErr	= 616,
    SUBXri	= 617,
    SUBXrr	= 618,
    SUBri	= 619,
    SUBrr	= 620,
    SWAPArr	= 621,
    SWAPri	= 622,
    SWAPrr	= 623,
    TA1	= 624,
    TA3	= 625,
    TA5	= 626,
    TADDCCTVri	= 627,
    TADDCCTVrr	= 628,
    TADDCCri	= 629,
    TADDCCrr	= 630,
    TICCri	= 631,
    TICCrr	= 632,
    TLS_ADDXrr	= 633,
    TLS_ADDrr	= 634,
    TLS_CALL	= 635,
    TLS_LDXrr	= 636,
    TLS_LDrr	= 637,
    TRAPri	= 638,
    TRAPrr	= 639,
    TSUBCCTVri	= 640,
    TSUBCCTVrr	= 641,
    TSUBCCri	= 642,
    TSUBCCrr	= 643,
    TXCCri	= 644,
    TXCCrr	= 645,
    UDIVCCri	= 646,
    UDIVCCrr	= 647,
    UDIVXri	= 648,
    UDIVXrr	= 649,
    UDIVri	= 650,
    UDIVrr	= 651,
    UMACri	= 652,
    UMACrr	= 653,
    UMULCCri	= 654,
    UMULCCrr	= 655,
    UMULXHI	= 656,
    UMULri	= 657,
    UMULrr	= 658,
    UNIMP	= 659,
    V9FCMPD	= 660,
    V9FCMPED	= 661,
    V9FCMPEQ	= 662,
    V9FCMPES	= 663,
    V9FCMPQ	= 664,
    V9FCMPS	= 665,
    V9FMOVD_FCC	= 666,
    V9FMOVQ_FCC	= 667,
    V9FMOVS_FCC	= 668,
    V9MOVFCCri	= 669,
    V9MOVFCCrr	= 670,
    WRASRri	= 671,
    WRASRrr	= 672,
    WRPRri	= 673,
    WRPRrr	= 674,
    WRPSRri	= 675,
    WRPSRrr	= 676,
    WRTBRri	= 677,
    WRTBRrr	= 678,
    WRWIMri	= 679,
    WRWIMrr	= 680,
    XMULX	= 681,
    XMULXHI	= 682,
    XNORCCri	= 683,
    XNORCCrr	= 684,
    XNORXrr	= 685,
    XNORri	= 686,
    XNORrr	= 687,
    XORCCri	= 688,
    XORCCrr	= 689,
    XORXri	= 690,
    XORXrr	= 691,
    XORri	= 692,
    XORrr	= 693,
    INSTRUCTION_LIST_END = 694
  };

} // end SP namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace SP {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIC_iu_instr	= 1,
    IIC_fpu_normal_instr	= 2,
    IIC_jmp_or_call	= 3,
    IIC_fpu_abs	= 4,
    IIC_fpu_fast_instr	= 5,
    IIC_fpu_divd	= 6,
    IIC_fpu_divs	= 7,
    IIC_fpu_muld	= 8,
    IIC_fpu_muls	= 9,
    IIC_fpu_negs	= 10,
    IIC_fpu_sqrtd	= 11,
    IIC_fpu_sqrts	= 12,
    IIC_fpu_stod	= 13,
    IIC_ldd	= 14,
    IIC_iu_or_fpu_instr	= 15,
    IIC_iu_div	= 16,
    IIC_smac_umac	= 17,
    IIC_iu_smul	= 18,
    IIC_st	= 19,
    IIC_std	= 20,
    IIC_iu_umul	= 21,
    SCHED_LIST_END = 22
  };
} // end Sched namespace
} // end SP namespace
} // end llvm namespace
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { SP::O6, 0 };
static const MCPhysReg ImplicitList2[] = { SP::O7, 0 };
static const MCPhysReg ImplicitList3[] = { SP::FCC0, 0 };
static const MCPhysReg ImplicitList4[] = { SP::ICC, 0 };
static const MCPhysReg ImplicitList5[] = { SP::CPSR, 0 };
static const MCPhysReg ImplicitList6[] = { SP::FSR, 0 };
static const MCPhysReg ImplicitList7[] = { SP::Y, SP::ICC, 0 };
static const MCPhysReg ImplicitList8[] = { SP::PSR, 0 };
static const MCPhysReg ImplicitList9[] = { SP::TBR, 0 };
static const MCPhysReg ImplicitList10[] = { SP::WIM, 0 };
static const MCPhysReg ImplicitList11[] = { SP::Y, 0 };
static const MCPhysReg ImplicitList12[] = { SP::Y, SP::ASR18, 0 };
static const MCPhysReg ImplicitList13[] = { SP::CPQ, 0 };
static const MCPhysReg ImplicitList14[] = { SP::FQ, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo47[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo49[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo69[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo70[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo101[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::CoprocPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntPairRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo128[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo129[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo130[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::I64RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::DFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::QFPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FPRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::FCCRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { SP::ASRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { SP::PRRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { SP::IntRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };

extern const MCInstrDesc SparcInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #13 = DBG_VALUE
  { 14,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #14 = DBG_LABEL
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #15 = REG_SEQUENCE
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #16 = COPY
  { 17,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #17 = BUNDLE
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #18 = LIFETIME_START
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #19 = LIFETIME_END
  { 20,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #20 = STACKMAP
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = FENTRY_CALL
  { 22,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #22 = PATCHPOINT
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #23 = LOAD_STACK_GUARD
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = STATEPOINT
  { 25,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #25 = LOCAL_ESCAPE
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = FAULTING_OP
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_OP
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_FUNCTION_ENTER
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #29 = PATCHABLE_RET
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #30 = PATCHABLE_FUNCTION_EXIT
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #31 = PATCHABLE_TAIL_CALL
  { 32,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #32 = PATCHABLE_EVENT_CALL
  { 33,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = PATCHABLE_TYPED_EVENT_CALL
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #34 = ICALL_BRANCH_FUNNEL
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #35 = G_ADD
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #36 = G_SUB
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #37 = G_MUL
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #38 = G_SDIV
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #39 = G_UDIV
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #40 = G_SREM
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #41 = G_UREM
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #42 = G_AND
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #43 = G_OR
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #44 = G_XOR
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #45 = G_IMPLICIT_DEF
  { 46,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #46 = G_PHI
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #47 = G_FRAME_INDEX
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #48 = G_GLOBAL_VALUE
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #49 = G_EXTRACT
  { 50,	2,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = G_UNMERGE_VALUES
  { 51,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #51 = G_INSERT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #52 = G_MERGE_VALUES
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #53 = G_BUILD_VECTOR
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #54 = G_BUILD_VECTOR_TRUNC
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #55 = G_CONCAT_VECTORS
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #56 = G_PTRTOINT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #57 = G_INTTOPTR
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #58 = G_BITCAST
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #59 = G_INTRINSIC_TRUNC
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #60 = G_INTRINSIC_ROUND
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #61 = G_LOAD
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #62 = G_SEXTLOAD
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #63 = G_ZEXTLOAD
  { 64,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #64 = G_STORE
  { 65,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #65 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 66,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #66 = G_ATOMIC_CMPXCHG
  { 67,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #67 = G_ATOMICRMW_XCHG
  { 68,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #68 = G_ATOMICRMW_ADD
  { 69,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #69 = G_ATOMICRMW_SUB
  { 70,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #70 = G_ATOMICRMW_AND
  { 71,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #71 = G_ATOMICRMW_NAND
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #72 = G_ATOMICRMW_OR
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #73 = G_ATOMICRMW_XOR
  { 74,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #74 = G_ATOMICRMW_MAX
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #75 = G_ATOMICRMW_MIN
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #76 = G_ATOMICRMW_UMAX
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #77 = G_ATOMICRMW_UMIN
  { 78,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #78 = G_FENCE
  { 79,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #79 = G_BRCOND
  { 80,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #80 = G_BRINDIRECT
  { 81,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #81 = G_INTRINSIC
  { 82,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #82 = G_INTRINSIC_W_SIDE_EFFECTS
  { 83,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #83 = G_ANYEXT
  { 84,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #84 = G_TRUNC
  { 85,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #85 = G_CONSTANT
  { 86,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #86 = G_FCONSTANT
  { 87,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #87 = G_VASTART
  { 88,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #88 = G_VAARG
  { 89,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #89 = G_SEXT
  { 90,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #90 = G_ZEXT
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #91 = G_SHL
  { 92,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #92 = G_LSHR
  { 93,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #93 = G_ASHR
  { 94,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #94 = G_ICMP
  { 95,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #95 = G_FCMP
  { 96,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #96 = G_SELECT
  { 97,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #97 = G_UADDO
  { 98,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #98 = G_UADDE
  { 99,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #99 = G_USUBO
  { 100,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #100 = G_USUBE
  { 101,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #101 = G_SADDO
  { 102,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #102 = G_SADDE
  { 103,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #103 = G_SSUBO
  { 104,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #104 = G_SSUBE
  { 105,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #105 = G_UMULO
  { 106,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #106 = G_SMULO
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #107 = G_UMULH
  { 108,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #108 = G_SMULH
  { 109,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #109 = G_FADD
  { 110,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #110 = G_FSUB
  { 111,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #111 = G_FMUL
  { 112,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #112 = G_FMA
  { 113,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #113 = G_FDIV
  { 114,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #114 = G_FREM
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #115 = G_FPOW
  { 116,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #116 = G_FEXP
  { 117,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #117 = G_FEXP2
  { 118,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #118 = G_FLOG
  { 119,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #119 = G_FLOG2
  { 120,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #120 = G_FLOG10
  { 121,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #121 = G_FNEG
  { 122,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #122 = G_FPEXT
  { 123,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #123 = G_FPTRUNC
  { 124,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #124 = G_FPTOSI
  { 125,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #125 = G_FPTOUI
  { 126,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #126 = G_SITOFP
  { 127,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #127 = G_UITOFP
  { 128,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #128 = G_FABS
  { 129,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #129 = G_FCOPYSIGN
  { 130,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #130 = G_FCANONICALIZE
  { 131,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #131 = G_FMINNUM
  { 132,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #132 = G_FMAXNUM
  { 133,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #133 = G_FMINNUM_IEEE
  { 134,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #134 = G_FMAXNUM_IEEE
  { 135,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #135 = G_FMINIMUM
  { 136,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #136 = G_FMAXIMUM
  { 137,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #137 = G_GEP
  { 138,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #138 = G_PTR_MASK
  { 139,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #139 = G_SMIN
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #140 = G_SMAX
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #141 = G_UMIN
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #142 = G_UMAX
  { 143,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #143 = G_BR
  { 144,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #144 = G_BRJT
  { 145,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #145 = G_INSERT_VECTOR_ELT
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #146 = G_EXTRACT_VECTOR_ELT
  { 147,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #147 = G_SHUFFLE_VECTOR
  { 148,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #148 = G_CTTZ
  { 149,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #149 = G_CTTZ_ZERO_UNDEF
  { 150,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #150 = G_CTLZ
  { 151,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #151 = G_CTLZ_ZERO_UNDEF
  { 152,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #152 = G_CTPOP
  { 153,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #153 = G_BSWAP
  { 154,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #154 = G_FCEIL
  { 155,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #155 = G_FCOS
  { 156,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #156 = G_FSIN
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #157 = G_FSQRT
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #158 = G_FFLOOR
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #159 = G_FRINT
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #160 = G_FNEARBYINT
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #161 = G_ADDRSPACE_CAST
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #162 = G_BLOCK_ADDR
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #163 = G_JUMP_TABLE
  { 164,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #164 = ADJCALLSTACKDOWN
  { 165,	2,	0,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #165 = ADJCALLSTACKUP
  { 166,	1,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList2, OperandInfo2, -1 ,nullptr },  // Inst #166 = GETPCX
  { 167,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #167 = SELECT_CC_DFP_FCC
  { 168,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #168 = SELECT_CC_DFP_ICC
  { 169,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #169 = SELECT_CC_FP_FCC
  { 170,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #170 = SELECT_CC_FP_ICC
  { 171,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #171 = SELECT_CC_Int_FCC
  { 172,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #172 = SELECT_CC_Int_ICC
  { 173,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList3, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #173 = SELECT_CC_QFP_FCC
  { 174,	4,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList4, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #174 = SELECT_CC_QFP_ICC
  { 175,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #175 = SET
  { 176,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #176 = ADDCCri
  { 177,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #177 = ADDCCrr
  { 178,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #178 = ADDCri
  { 179,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #179 = ADDCrr
  { 180,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #180 = ADDEri
  { 181,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #181 = ADDErr
  { 182,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #182 = ADDXC
  { 183,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo39, -1 ,nullptr },  // Inst #183 = ADDXCCC
  { 184,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #184 = ADDXri
  { 185,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #185 = ADDXrr
  { 186,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #186 = ADDri
  { 187,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #187 = ADDrr
  { 188,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #188 = ALIGNADDR
  { 189,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #189 = ALIGNADDRL
  { 190,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #190 = ANDCCri
  { 191,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #191 = ANDCCrr
  { 192,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #192 = ANDNCCri
  { 193,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #193 = ANDNCCrr
  { 194,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #194 = ANDNri
  { 195,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #195 = ANDNrr
  { 196,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #196 = ANDXNrr
  { 197,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #197 = ANDXri
  { 198,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #198 = ANDXrr
  { 199,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #199 = ANDri
  { 200,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #200 = ANDrr
  { 201,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #201 = ARRAY16
  { 202,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #202 = ARRAY32
  { 203,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #203 = ARRAY8
  { 204,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #204 = BA
  { 205,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #205 = BCOND
  { 206,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #206 = BCONDA
  { 207,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #207 = BINDri
  { 208,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #208 = BINDrr
  { 209,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #209 = BMASK
  { 210,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #210 = BPFCC
  { 211,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #211 = BPFCCA
  { 212,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #212 = BPFCCANT
  { 213,	3,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #213 = BPFCCNT
  { 214,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #214 = BPGEZapn
  { 215,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #215 = BPGEZapt
  { 216,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #216 = BPGEZnapn
  { 217,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #217 = BPGEZnapt
  { 218,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #218 = BPGZapn
  { 219,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #219 = BPGZapt
  { 220,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #220 = BPGZnapn
  { 221,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #221 = BPGZnapt
  { 222,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #222 = BPICC
  { 223,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #223 = BPICCA
  { 224,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #224 = BPICCANT
  { 225,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #225 = BPICCNT
  { 226,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #226 = BPLEZapn
  { 227,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #227 = BPLEZapt
  { 228,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #228 = BPLEZnapn
  { 229,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #229 = BPLEZnapt
  { 230,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #230 = BPLZapn
  { 231,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #231 = BPLZapt
  { 232,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #232 = BPLZnapn
  { 233,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #233 = BPLZnapt
  { 234,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #234 = BPNZapn
  { 235,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #235 = BPNZapt
  { 236,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #236 = BPNZnapn
  { 237,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #237 = BPNZnapt
  { 238,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #238 = BPXCC
  { 239,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #239 = BPXCCA
  { 240,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #240 = BPXCCANT
  { 241,	2,	0,	4,	1,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #241 = BPXCCNT
  { 242,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #242 = BPZapn
  { 243,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #243 = BPZapt
  { 244,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #244 = BPZnapn
  { 245,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #245 = BPZnapt
  { 246,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #246 = BSHUFFLE
  { 247,	1,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #247 = CALL
  { 248,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #248 = CALLri
  { 249,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #249 = CALLrr
  { 250,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #250 = CASAasi10
  { 251,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #251 = CASArr
  { 252,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #252 = CASXrr
  { 253,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #253 = CASrr
  { 254,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #254 = CBCOND
  { 255,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #255 = CBCONDA
  { 256,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #256 = CMASK16
  { 257,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #257 = CMASK32
  { 258,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #258 = CMASK8
  { 259,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #259 = CMPri
  { 260,	2,	0,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #260 = CMPrr
  { 261,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #261 = EDGE16
  { 262,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #262 = EDGE16L
  { 263,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #263 = EDGE16LN
  { 264,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #264 = EDGE16N
  { 265,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #265 = EDGE32
  { 266,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #266 = EDGE32L
  { 267,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #267 = EDGE32LN
  { 268,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #268 = EDGE32N
  { 269,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #269 = EDGE8
  { 270,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #270 = EDGE8L
  { 271,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #271 = EDGE8LN
  { 272,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #272 = EDGE8N
  { 273,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #273 = FABSD
  { 274,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #274 = FABSQ
  { 275,	2,	1,	4,	4,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #275 = FABSS
  { 276,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #276 = FADDD
  { 277,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #277 = FADDQ
  { 278,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #278 = FADDS
  { 279,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #279 = FALIGNADATA
  { 280,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #280 = FAND
  { 281,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #281 = FANDNOT1
  { 282,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #282 = FANDNOT1S
  { 283,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #283 = FANDNOT2
  { 284,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #284 = FANDNOT2S
  { 285,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #285 = FANDS
  { 286,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #286 = FBCOND
  { 287,	2,	0,	4,	2,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #287 = FBCONDA
  { 288,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #288 = FCHKSM16
  { 289,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo52, -1 ,nullptr },  // Inst #289 = FCMPD
  { 290,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #290 = FCMPEQ16
  { 291,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #291 = FCMPEQ32
  { 292,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #292 = FCMPGT16
  { 293,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #293 = FCMPGT32
  { 294,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #294 = FCMPLE16
  { 295,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #295 = FCMPLE32
  { 296,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #296 = FCMPNE16
  { 297,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #297 = FCMPNE32
  { 298,	2,	0,	4,	0,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo53, -1 ,nullptr },  // Inst #298 = FCMPQ
  { 299,	2,	0,	4,	5,	0, 0x0ULL, nullptr, ImplicitList3, OperandInfo54, -1 ,nullptr },  // Inst #299 = FCMPS
  { 300,	3,	1,	4,	6,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #300 = FDIVD
  { 301,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #301 = FDIVQ
  { 302,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #302 = FDIVS
  { 303,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #303 = FDMULQ
  { 304,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #304 = FDTOI
  { 305,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #305 = FDTOQ
  { 306,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #306 = FDTOS
  { 307,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #307 = FDTOX
  { 308,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #308 = FEXPAND
  { 309,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #309 = FHADDD
  { 310,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #310 = FHADDS
  { 311,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #311 = FHSUBD
  { 312,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #312 = FHSUBS
  { 313,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #313 = FITOD
  { 314,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #314 = FITOQ
  { 315,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #315 = FITOS
  { 316,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #316 = FLCMPD
  { 317,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #317 = FLCMPS
  { 318,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #318 = FLUSH
  { 319,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #319 = FLUSHW
  { 320,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #320 = FLUSHri
  { 321,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #321 = FLUSHrr
  { 322,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #322 = FMEAN16
  { 323,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #323 = FMOVD
  { 324,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #324 = FMOVD_FCC
  { 325,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #325 = FMOVD_ICC
  { 326,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #326 = FMOVD_XCC
  { 327,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #327 = FMOVQ
  { 328,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #328 = FMOVQ_FCC
  { 329,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #329 = FMOVQ_ICC
  { 330,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #330 = FMOVQ_XCC
  { 331,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #331 = FMOVRGEZD
  { 332,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #332 = FMOVRGEZQ
  { 333,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #333 = FMOVRGEZS
  { 334,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #334 = FMOVRGZD
  { 335,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #335 = FMOVRGZQ
  { 336,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #336 = FMOVRGZS
  { 337,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #337 = FMOVRLEZD
  { 338,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #338 = FMOVRLEZQ
  { 339,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #339 = FMOVRLEZS
  { 340,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #340 = FMOVRLZD
  { 341,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #341 = FMOVRLZQ
  { 342,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #342 = FMOVRLZS
  { 343,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #343 = FMOVRNZD
  { 344,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #344 = FMOVRNZQ
  { 345,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #345 = FMOVRNZS
  { 346,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #346 = FMOVRZD
  { 347,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #347 = FMOVRZQ
  { 348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #348 = FMOVRZS
  { 349,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #349 = FMOVS
  { 350,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #350 = FMOVS_FCC
  { 351,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #351 = FMOVS_ICC
  { 352,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #352 = FMOVS_XCC
  { 353,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #353 = FMUL8SUX16
  { 354,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #354 = FMUL8ULX16
  { 355,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #355 = FMUL8X16
  { 356,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #356 = FMUL8X16AL
  { 357,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #357 = FMUL8X16AU
  { 358,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #358 = FMULD
  { 359,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #359 = FMULD8SUX16
  { 360,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #360 = FMULD8ULX16
  { 361,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #361 = FMULQ
  { 362,	3,	1,	4,	9,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #362 = FMULS
  { 363,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #363 = FNADDD
  { 364,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #364 = FNADDS
  { 365,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #365 = FNAND
  { 366,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #366 = FNANDS
  { 367,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #367 = FNEGD
  { 368,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #368 = FNEGQ
  { 369,	2,	1,	4,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #369 = FNEGS
  { 370,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #370 = FNHADDD
  { 371,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #371 = FNHADDS
  { 372,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #372 = FNMULD
  { 373,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #373 = FNMULS
  { 374,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #374 = FNOR
  { 375,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #375 = FNORS
  { 376,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #376 = FNOT1
  { 377,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #377 = FNOT1S
  { 378,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #378 = FNOT2
  { 379,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #379 = FNOT2S
  { 380,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #380 = FNSMULD
  { 381,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #381 = FONE
  { 382,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #382 = FONES
  { 383,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #383 = FOR
  { 384,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #384 = FORNOT1
  { 385,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #385 = FORNOT1S
  { 386,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #386 = FORNOT2
  { 387,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #387 = FORNOT2S
  { 388,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #388 = FORS
  { 389,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #389 = FPACK16
  { 390,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #390 = FPACK32
  { 391,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #391 = FPACKFIX
  { 392,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #392 = FPADD16
  { 393,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #393 = FPADD16S
  { 394,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #394 = FPADD32
  { 395,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #395 = FPADD32S
  { 396,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #396 = FPADD64
  { 397,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #397 = FPMERGE
  { 398,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #398 = FPSUB16
  { 399,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #399 = FPSUB16S
  { 400,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #400 = FPSUB32
  { 401,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #401 = FPSUB32S
  { 402,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #402 = FQTOD
  { 403,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #403 = FQTOI
  { 404,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #404 = FQTOS
  { 405,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #405 = FQTOX
  { 406,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #406 = FSLAS16
  { 407,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #407 = FSLAS32
  { 408,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #408 = FSLL16
  { 409,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #409 = FSLL32
  { 410,	3,	1,	4,	8,	0, 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #410 = FSMULD
  { 411,	2,	1,	4,	11,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #411 = FSQRTD
  { 412,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #412 = FSQRTQ
  { 413,	2,	1,	4,	12,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #413 = FSQRTS
  { 414,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #414 = FSRA16
  { 415,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #415 = FSRA32
  { 416,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #416 = FSRC1
  { 417,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #417 = FSRC1S
  { 418,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #418 = FSRC2
  { 419,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #419 = FSRC2S
  { 420,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #420 = FSRL16
  { 421,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #421 = FSRL32
  { 422,	2,	1,	4,	13,	0, 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #422 = FSTOD
  { 423,	2,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #423 = FSTOI
  { 424,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #424 = FSTOQ
  { 425,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #425 = FSTOX
  { 426,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #426 = FSUBD
  { 427,	3,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #427 = FSUBQ
  { 428,	3,	1,	4,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #428 = FSUBS
  { 429,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #429 = FXNOR
  { 430,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #430 = FXNORS
  { 431,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #431 = FXOR
  { 432,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #432 = FXORS
  { 433,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #433 = FXTOD
  { 434,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #434 = FXTOQ
  { 435,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #435 = FXTOS
  { 436,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #436 = FZERO
  { 437,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #437 = FZEROS
  { 438,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #438 = JMPLri
  { 439,	3,	1,	4,	3,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #439 = JMPLrr
  { 440,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #440 = LDArr
  { 441,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo41, -1 ,nullptr },  // Inst #441 = LDCSRri
  { 442,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo42, -1 ,nullptr },  // Inst #442 = LDCSRrr
  { 443,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #443 = LDCri
  { 444,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #444 = LDCrr
  { 445,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #445 = LDDArr
  { 446,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #446 = LDDCri
  { 447,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #447 = LDDCrr
  { 448,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #448 = LDDFArr
  { 449,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #449 = LDDFri
  { 450,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #450 = LDDFrr
  { 451,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #451 = LDDri
  { 452,	3,	1,	4,	14,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #452 = LDDrr
  { 453,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #453 = LDFArr
  { 454,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41, -1 ,nullptr },  // Inst #454 = LDFSRri
  { 455,	2,	0,	4,	15,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo42, -1 ,nullptr },  // Inst #455 = LDFSRrr
  { 456,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #456 = LDFri
  { 457,	3,	1,	4,	15,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #457 = LDFrr
  { 458,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #458 = LDQFArr
  { 459,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #459 = LDQFri
  { 460,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #460 = LDQFrr
  { 461,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #461 = LDSBArr
  { 462,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #462 = LDSBri
  { 463,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #463 = LDSBrr
  { 464,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #464 = LDSHArr
  { 465,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #465 = LDSHri
  { 466,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #466 = LDSHrr
  { 467,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #467 = LDSTUBArr
  { 468,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #468 = LDSTUBri
  { 469,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #469 = LDSTUBrr
  { 470,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #470 = LDSWri
  { 471,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #471 = LDSWrr
  { 472,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #472 = LDUBArr
  { 473,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #473 = LDUBri
  { 474,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #474 = LDUBrr
  { 475,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #475 = LDUHArr
  { 476,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #476 = LDUHri
  { 477,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #477 = LDUHrr
  { 478,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41, -1 ,nullptr },  // Inst #478 = LDXFSRri
  { 479,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo42, -1 ,nullptr },  // Inst #479 = LDXFSRrr
  { 480,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #480 = LDXri
  { 481,	3,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #481 = LDXrr
  { 482,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #482 = LDri
  { 483,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #483 = LDrr
  { 484,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #484 = LEAX_ADDri
  { 485,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #485 = LEA_ADDri
  { 486,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #486 = LZCNT
  { 487,	1,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #487 = MEMBARi
  { 488,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #488 = MOVDTOX
  { 489,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #489 = MOVFCCri
  { 490,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList3, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #490 = MOVFCCrr
  { 491,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #491 = MOVICCri
  { 492,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #492 = MOVICCrr
  { 493,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #493 = MOVRGEZri
  { 494,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #494 = MOVRGEZrr
  { 495,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #495 = MOVRGZri
  { 496,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #496 = MOVRGZrr
  { 497,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #497 = MOVRLEZri
  { 498,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #498 = MOVRLEZrr
  { 499,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #499 = MOVRLZri
  { 500,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #500 = MOVRLZrr
  { 501,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #501 = MOVRNZri
  { 502,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #502 = MOVRNZrr
  { 503,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #503 = MOVRRZri
  { 504,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #504 = MOVRRZrr
  { 505,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #505 = MOVSTOSW
  { 506,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #506 = MOVSTOUW
  { 507,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #507 = MOVWTOS
  { 508,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #508 = MOVXCCri
  { 509,	4,	1,	4,	0,	0, 0x0ULL, ImplicitList4, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #509 = MOVXCCrr
  { 510,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #510 = MOVXTOD
  { 511,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #511 = MULSCCri
  { 512,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, ImplicitList7, OperandInfo38, -1 ,nullptr },  // Inst #512 = MULSCCrr
  { 513,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #513 = MULXri
  { 514,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #514 = MULXrr
  { 515,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #515 = NOP
  { 516,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #516 = ORCCri
  { 517,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #517 = ORCCrr
  { 518,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #518 = ORNCCri
  { 519,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #519 = ORNCCrr
  { 520,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #520 = ORNri
  { 521,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #521 = ORNrr
  { 522,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #522 = ORXNrr
  { 523,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #523 = ORXri
  { 524,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #524 = ORXrr
  { 525,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #525 = ORri
  { 526,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #526 = ORrr
  { 527,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #527 = PDIST
  { 528,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #528 = PDISTN
  { 529,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #529 = POPCrr
  { 530,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo50, -1 ,nullptr },  // Inst #530 = PWRPSRri
  { 531,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo51, -1 ,nullptr },  // Inst #531 = PWRPSRrr
  { 532,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #532 = RDASR
  { 533,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #533 = RDPR
  { 534,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList8, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #534 = RDPSR
  { 535,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList9, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #535 = RDTBR
  { 536,	1,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList10, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #536 = RDWIM
  { 537,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #537 = RESTOREri
  { 538,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #538 = RESTORErr
  { 539,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #539 = RET
  { 540,	1,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #540 = RETL
  { 541,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #541 = RETTri
  { 542,	2,	0,	4,	3,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #542 = RETTrr
  { 543,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #543 = SAVEri
  { 544,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #544 = SAVErr
  { 545,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #545 = SDIVCCri
  { 546,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo38, -1 ,nullptr },  // Inst #546 = SDIVCCrr
  { 547,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #547 = SDIVXri
  { 548,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #548 = SDIVXrr
  { 549,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo37, -1 ,nullptr },  // Inst #549 = SDIVri
  { 550,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo38, -1 ,nullptr },  // Inst #550 = SDIVrr
  { 551,	2,	1,	4,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #551 = SETHIXi
  { 552,	2,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #552 = SETHIi
  { 553,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #553 = SHUTDOWN
  { 554,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #554 = SIAM
  { 555,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #555 = SLLXri
  { 556,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #556 = SLLXrr
  { 557,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #557 = SLLri
  { 558,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #558 = SLLrr
  { 559,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo104, -1 ,nullptr },  // Inst #559 = SMACri
  { 560,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo105, -1 ,nullptr },  // Inst #560 = SMACrr
  { 561,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #561 = SMULCCri
  { 562,	3,	1,	4,	18,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo38, -1 ,nullptr },  // Inst #562 = SMULCCrr
  { 563,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo37, -1 ,nullptr },  // Inst #563 = SMULri
  { 564,	3,	1,	4,	18,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo38, -1 ,nullptr },  // Inst #564 = SMULrr
  { 565,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #565 = SRAXri
  { 566,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #566 = SRAXrr
  { 567,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #567 = SRAri
  { 568,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #568 = SRArr
  { 569,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #569 = SRLXri
  { 570,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #570 = SRLXrr
  { 571,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #571 = SRLri
  { 572,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #572 = SRLrr
  { 573,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #573 = STArr
  { 574,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #574 = STBAR
  { 575,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #575 = STBArr
  { 576,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #576 = STBri
  { 577,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #577 = STBrr
  { 578,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo41, -1 ,nullptr },  // Inst #578 = STCSRri
  { 579,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo42, -1 ,nullptr },  // Inst #579 = STCSRrr
  { 580,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #580 = STCri
  { 581,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #581 = STCrr
  { 582,	4,	0,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #582 = STDArr
  { 583,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo41, -1 ,nullptr },  // Inst #583 = STDCQri
  { 584,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList13, OperandInfo42, -1 ,nullptr },  // Inst #584 = STDCQrr
  { 585,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #585 = STDCri
  { 586,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #586 = STDCrr
  { 587,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #587 = STDFArr
  { 588,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo41, -1 ,nullptr },  // Inst #588 = STDFQri
  { 589,	2,	1,	4,	20,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList14, OperandInfo42, -1 ,nullptr },  // Inst #589 = STDFQrr
  { 590,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #590 = STDFri
  { 591,	3,	0,	4,	20,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #591 = STDFrr
  { 592,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #592 = STDri
  { 593,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #593 = STDrr
  { 594,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #594 = STFArr
  { 595,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41, -1 ,nullptr },  // Inst #595 = STFSRri
  { 596,	2,	1,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo42, -1 ,nullptr },  // Inst #596 = STFSRrr
  { 597,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #597 = STFri
  { 598,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #598 = STFrr
  { 599,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #599 = STHArr
  { 600,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #600 = STHri
  { 601,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #601 = STHrr
  { 602,	4,	0,	4,	19,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #602 = STQFArr
  { 603,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #603 = STQFri
  { 604,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #604 = STQFrr
  { 605,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo41, -1 ,nullptr },  // Inst #605 = STXFSRri
  { 606,	2,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList6, OperandInfo42, -1 ,nullptr },  // Inst #606 = STXFSRrr
  { 607,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #607 = STXri
  { 608,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #608 = STXrr
  { 609,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #609 = STri
  { 610,	3,	0,	4,	19,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #610 = STrr
  { 611,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #611 = SUBCCri
  { 612,	3,	1,	4,	1,	0, 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #612 = SUBCCrr
  { 613,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #613 = SUBCri
  { 614,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #614 = SUBCrr
  { 615,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #615 = SUBEri
  { 616,	3,	1,	4,	1,	0, 0x0ULL, ImplicitList4, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #616 = SUBErr
  { 617,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #617 = SUBXri
  { 618,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #618 = SUBXrr
  { 619,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #619 = SUBri
  { 620,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #620 = SUBrr
  { 621,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #621 = SWAPArr
  { 622,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #622 = SWAPri
  { 623,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo129, -1 ,nullptr },  // Inst #623 = SWAPrr
  { 624,	0,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #624 = TA1
  { 625,	0,	0,	4,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #625 = TA3
  { 626,	0,	0,	4,	1,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #626 = TA5
  { 627,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #627 = TADDCCTVri
  { 628,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #628 = TADDCCTVrr
  { 629,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #629 = TADDCCri
  { 630,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #630 = TADDCCrr
  { 631,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #631 = TICCri
  { 632,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #632 = TICCrr
  { 633,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #633 = TLS_ADDXrr
  { 634,	4,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #634 = TLS_ADDrr
  { 635,	2,	0,	4,	3,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Variadic), 0x0ULL, ImplicitList1, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #635 = TLS_CALL
  { 636,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #636 = TLS_LDXrr
  { 637,	4,	1,	4,	1,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #637 = TLS_LDrr
  { 638,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #638 = TRAPri
  { 639,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #639 = TRAPrr
  { 640,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #640 = TSUBCCTVri
  { 641,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #641 = TSUBCCTVrr
  { 642,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #642 = TSUBCCri
  { 643,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #643 = TSUBCCrr
  { 644,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #644 = TXCCri
  { 645,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList4, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #645 = TXCCrr
  { 646,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #646 = UDIVCCri
  { 647,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList7, OperandInfo38, -1 ,nullptr },  // Inst #647 = UDIVCCrr
  { 648,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #648 = UDIVXri
  { 649,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #649 = UDIVXrr
  { 650,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo37, -1 ,nullptr },  // Inst #650 = UDIVri
  { 651,	3,	1,	4,	16,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList11, ImplicitList11, OperandInfo38, -1 ,nullptr },  // Inst #651 = UDIVrr
  { 652,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo104, -1 ,nullptr },  // Inst #652 = UMACri
  { 653,	4,	1,	4,	17,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList12, ImplicitList12, OperandInfo105, -1 ,nullptr },  // Inst #653 = UMACrr
  { 654,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo37, -1 ,nullptr },  // Inst #654 = UMULCCri
  { 655,	3,	1,	4,	21,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo38, -1 ,nullptr },  // Inst #655 = UMULCCrr
  { 656,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #656 = UMULXHI
  { 657,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo37, -1 ,nullptr },  // Inst #657 = UMULri
  { 658,	3,	1,	4,	21,	0, 0x0ULL, nullptr, ImplicitList11, OperandInfo38, -1 ,nullptr },  // Inst #658 = UMULrr
  { 659,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #659 = UNIMP
  { 660,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #660 = V9FCMPD
  { 661,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #661 = V9FCMPED
  { 662,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #662 = V9FCMPEQ
  { 663,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #663 = V9FCMPES
  { 664,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #664 = V9FCMPQ
  { 665,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #665 = V9FCMPS
  { 666,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #666 = V9FMOVD_FCC
  { 667,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #667 = V9FMOVQ_FCC
  { 668,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #668 = V9FMOVS_FCC
  { 669,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #669 = V9MOVFCCri
  { 670,	5,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #670 = V9MOVFCCrr
  { 671,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #671 = WRASRri
  { 672,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142, -1 ,nullptr },  // Inst #672 = WRASRrr
  { 673,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #673 = WRPRri
  { 674,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo144, -1 ,nullptr },  // Inst #674 = WRPRrr
  { 675,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo50, -1 ,nullptr },  // Inst #675 = WRPSRri
  { 676,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList8, OperandInfo51, -1 ,nullptr },  // Inst #676 = WRPSRrr
  { 677,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo50, -1 ,nullptr },  // Inst #677 = WRTBRri
  { 678,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList9, OperandInfo51, -1 ,nullptr },  // Inst #678 = WRTBRrr
  { 679,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo50, -1 ,nullptr },  // Inst #679 = WRWIMri
  { 680,	2,	0,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList10, OperandInfo51, -1 ,nullptr },  // Inst #680 = WRWIMrr
  { 681,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #681 = XMULX
  { 682,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #682 = XMULXHI
  { 683,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #683 = XNORCCri
  { 684,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #684 = XNORCCrr
  { 685,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #685 = XNORXrr
  { 686,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #686 = XNORri
  { 687,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #687 = XNORrr
  { 688,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo37, -1 ,nullptr },  // Inst #688 = XORCCri
  { 689,	3,	1,	4,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo38, -1 ,nullptr },  // Inst #689 = XORCCrr
  { 690,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #690 = XORXri
  { 691,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #691 = XORXrr
  { 692,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #692 = XORri
  { 693,	3,	1,	4,	1,	0, 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #693 = XORrr
};

extern const char SparcInstrNameData[] = {
  /* 0 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 9 */ 'C', 'A', 'S', 'A', 'a', 's', 'i', '1', '0', 0,
  /* 19 */ 'T', 'A', '1', 0,
  /* 23 */ 'F', 'S', 'R', 'C', '1', 0,
  /* 29 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 0,
  /* 38 */ 'F', 'N', 'O', 'T', '1', 0,
  /* 44 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 0,
  /* 52 */ 'F', 'S', 'R', 'A', '3', '2', 0,
  /* 59 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 0,
  /* 67 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 0,
  /* 75 */ 'E', 'D', 'G', 'E', '3', '2', 0,
  /* 82 */ 'F', 'C', 'M', 'P', 'L', 'E', '3', '2', 0,
  /* 91 */ 'F', 'C', 'M', 'P', 'N', 'E', '3', '2', 0,
  /* 100 */ 'F', 'P', 'A', 'C', 'K', '3', '2', 0,
  /* 108 */ 'C', 'M', 'A', 'S', 'K', '3', '2', 0,
  /* 116 */ 'F', 'S', 'L', 'L', '3', '2', 0,
  /* 123 */ 'F', 'S', 'R', 'L', '3', '2', 0,
  /* 130 */ 'F', 'C', 'M', 'P', 'E', 'Q', '3', '2', 0,
  /* 139 */ 'F', 'S', 'L', 'A', 'S', '3', '2', 0,
  /* 147 */ 'F', 'C', 'M', 'P', 'G', 'T', '3', '2', 0,
  /* 156 */ 'A', 'R', 'R', 'A', 'Y', '3', '2', 0,
  /* 164 */ 'F', 'S', 'R', 'C', '2', 0,
  /* 170 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 178 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 186 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 0,
  /* 195 */ 'F', 'N', 'O', 'T', '2', 0,
  /* 201 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 0,
  /* 209 */ 'T', 'A', '3', 0,
  /* 213 */ 'F', 'P', 'A', 'D', 'D', '6', '4', 0,
  /* 221 */ 'T', 'A', '5', 0,
  /* 225 */ 'F', 'S', 'R', 'A', '1', '6', 0,
  /* 232 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 0,
  /* 240 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 0,
  /* 248 */ 'E', 'D', 'G', 'E', '1', '6', 0,
  /* 255 */ 'F', 'C', 'M', 'P', 'L', 'E', '1', '6', 0,
  /* 264 */ 'F', 'C', 'M', 'P', 'N', 'E', '1', '6', 0,
  /* 273 */ 'F', 'P', 'A', 'C', 'K', '1', '6', 0,
  /* 281 */ 'C', 'M', 'A', 'S', 'K', '1', '6', 0,
  /* 289 */ 'F', 'S', 'L', 'L', '1', '6', 0,
  /* 296 */ 'F', 'S', 'R', 'L', '1', '6', 0,
  /* 303 */ 'F', 'C', 'H', 'K', 'S', 'M', '1', '6', 0,
  /* 312 */ 'F', 'M', 'E', 'A', 'N', '1', '6', 0,
  /* 320 */ 'F', 'C', 'M', 'P', 'E', 'Q', '1', '6', 0,
  /* 329 */ 'F', 'S', 'L', 'A', 'S', '1', '6', 0,
  /* 337 */ 'F', 'C', 'M', 'P', 'G', 'T', '1', '6', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 0,
  /* 355 */ 'F', 'M', 'U', 'L', 'D', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 367 */ 'F', 'M', 'U', 'L', '8', 'U', 'L', 'X', '1', '6', 0,
  /* 378 */ 'F', 'M', 'U', 'L', 'D', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 390 */ 'F', 'M', 'U', 'L', '8', 'S', 'U', 'X', '1', '6', 0,
  /* 401 */ 'A', 'R', 'R', 'A', 'Y', '1', '6', 0,
  /* 409 */ 'E', 'D', 'G', 'E', '8', 0,
  /* 415 */ 'C', 'M', 'A', 'S', 'K', '8', 0,
  /* 422 */ 'A', 'R', 'R', 'A', 'Y', '8', 0,
  /* 429 */ 'B', 'A', 0,
  /* 432 */ 'B', 'P', 'F', 'C', 'C', 'A', 0,
  /* 439 */ 'B', 'P', 'I', 'C', 'C', 'A', 0,
  /* 446 */ 'B', 'P', 'X', 'C', 'C', 'A', 0,
  /* 453 */ 'C', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 461 */ 'F', 'B', 'C', 'O', 'N', 'D', 'A', 0,
  /* 469 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 475 */ 'F', 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'A', 'T', 'A', 0,
  /* 487 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 494 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 500 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 516 */ 'A', 'D', 'D', 'X', 'C', 'C', 'C', 0,
  /* 524 */ 'B', 'P', 'F', 'C', 'C', 0,
  /* 530 */ 'V', '9', 'F', 'M', 'O', 'V', 'D', '_', 'F', 'C', 'C', 0,
  /* 542 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 560 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 578 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'F', 'C', 'C', 0,
  /* 595 */ 'V', '9', 'F', 'M', 'O', 'V', 'Q', '_', 'F', 'C', 'C', 0,
  /* 607 */ 'V', '9', 'F', 'M', 'O', 'V', 'S', '_', 'F', 'C', 'C', 0,
  /* 619 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'F', 'C', 'C', 0,
  /* 637 */ 'B', 'P', 'I', 'C', 'C', 0,
  /* 643 */ 'F', 'M', 'O', 'V', 'D', '_', 'I', 'C', 'C', 0,
  /* 653 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'D', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 671 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'Q', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 689 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'F', 'P', '_', 'I', 'C', 'C', 0,
  /* 706 */ 'F', 'M', 'O', 'V', 'Q', '_', 'I', 'C', 'C', 0,
  /* 716 */ 'F', 'M', 'O', 'V', 'S', '_', 'I', 'C', 'C', 0,
  /* 726 */ 'S', 'E', 'L', 'E', 'C', 'T', '_', 'C', 'C', '_', 'I', 'n', 't', '_', 'I', 'C', 'C', 0,
  /* 744 */ 'B', 'P', 'X', 'C', 'C', 0,
  /* 750 */ 'F', 'M', 'O', 'V', 'D', '_', 'X', 'C', 'C', 0,
  /* 760 */ 'F', 'M', 'O', 'V', 'Q', '_', 'X', 'C', 'C', 0,
  /* 770 */ 'F', 'M', 'O', 'V', 'S', '_', 'X', 'C', 'C', 0,
  /* 780 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 792 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 802 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 820 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 828 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 849 */ 'A', 'D', 'D', 'X', 'C', 0,
  /* 855 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 866 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 877 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 884 */ 'F', 'S', 'U', 'B', 'D', 0,
  /* 890 */ 'F', 'H', 'S', 'U', 'B', 'D', 0,
  /* 897 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 904 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 910 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 926 */ 'F', 'A', 'D', 'D', 'D', 0,
  /* 932 */ 'F', 'H', 'A', 'D', 'D', 'D', 0,
  /* 939 */ 'F', 'N', 'H', 'A', 'D', 'D', 'D', 0,
  /* 947 */ 'F', 'N', 'A', 'D', 'D', 'D', 0,
  /* 954 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'D', 0,
  /* 963 */ 'F', 'N', 'E', 'G', 'D', 0,
  /* 969 */ 'F', 'M', 'U', 'L', 'D', 0,
  /* 975 */ 'F', 'N', 'M', 'U', 'L', 'D', 0,
  /* 982 */ 'F', 'S', 'M', 'U', 'L', 'D', 0,
  /* 989 */ 'F', 'N', 'S', 'M', 'U', 'L', 'D', 0,
  /* 997 */ 'F', 'A', 'N', 'D', 0,
  /* 1002 */ 'F', 'N', 'A', 'N', 'D', 0,
  /* 1008 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1025 */ 'F', 'E', 'X', 'P', 'A', 'N', 'D', 0,
  /* 1033 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1039 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1055 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1068 */ 'C', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1075 */ 'F', 'B', 'C', 'O', 'N', 'D', 0,
  /* 1082 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1091 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1109 */ 'F', 'I', 'T', 'O', 'D', 0,
  /* 1115 */ 'F', 'Q', 'T', 'O', 'D', 0,
  /* 1121 */ 'F', 'S', 'T', 'O', 'D', 0,
  /* 1127 */ 'F', 'X', 'T', 'O', 'D', 0,
  /* 1133 */ 'M', 'O', 'V', 'X', 'T', 'O', 'D', 0,
  /* 1141 */ 'V', '9', 'F', 'C', 'M', 'P', 'D', 0,
  /* 1149 */ 'F', 'L', 'C', 'M', 'P', 'D', 0,
  /* 1156 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1173 */ 'F', 'A', 'B', 'S', 'D', 0,
  /* 1179 */ 'F', 'S', 'Q', 'R', 'T', 'D', 0,
  /* 1186 */ 'F', 'D', 'I', 'V', 'D', 0,
  /* 1192 */ 'F', 'M', 'O', 'V', 'D', 0,
  /* 1198 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'D', 0,
  /* 1208 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'D', 0,
  /* 1218 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'D', 0,
  /* 1227 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'D', 0,
  /* 1236 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'D', 0,
  /* 1245 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'D', 0,
  /* 1253 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1261 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1269 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1277 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1290 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1298 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1306 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1321 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1336 */ 'F', 'P', 'M', 'E', 'R', 'G', 'E', 0,
  /* 1344 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1357 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1364 */ 'B', 'S', 'H', 'U', 'F', 'F', 'L', 'E', 0,
  /* 1373 */ 'F', 'O', 'N', 'E', 0,
  /* 1378 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1391 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1399 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1409 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1424 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 1440 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1458 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1476 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 1491 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 1498 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1513 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 1527 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 1541 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 1558 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 1575 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 1582 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 1590 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 1598 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 1606 */ 'F', 'L', 'U', 'S', 'H', 0,
  /* 1612 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 1618 */ 'U', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1626 */ 'X', 'M', 'U', 'L', 'X', 'H', 'I', 0,
  /* 1634 */ 'F', 'D', 'T', 'O', 'I', 0,
  /* 1640 */ 'F', 'Q', 'T', 'O', 'I', 0,
  /* 1646 */ 'F', 'S', 'T', 'O', 'I', 0,
  /* 1652 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 1661 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 1670 */ 'B', 'M', 'A', 'S', 'K', 0,
  /* 1676 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 1687 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 0,
  /* 1695 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 0,
  /* 1703 */ 'E', 'D', 'G', 'E', '8', 'L', 0,
  /* 1710 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'L', 0,
  /* 1721 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1730 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1740 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1749 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 1766 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 1786 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 1792 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 1800 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 1820 */ 'T', 'L', 'S', '_', 'C', 'A', 'L', 'L', 0,
  /* 1829 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1856 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 1877 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 1889 */ 'K', 'I', 'L', 'L', 0,
  /* 1894 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 'L', 0,
  /* 1905 */ 'R', 'E', 'T', 'L', 0,
  /* 1910 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 1917 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 1923 */ 'S', 'I', 'A', 'M', 0,
  /* 1928 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 1935 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 1942 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 1949 */ 'R', 'D', 'W', 'I', 'M', 0,
  /* 1955 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 1965 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 1976 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 1987 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 1997 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 2007 */ 'E', 'D', 'G', 'E', '3', '2', 'N', 0,
  /* 2015 */ 'E', 'D', 'G', 'E', '1', '6', 'N', 0,
  /* 2023 */ 'E', 'D', 'G', 'E', '8', 'N', 0,
  /* 2030 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 2042 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2049 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2056 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2073 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2089 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2096 */ 'E', 'D', 'G', 'E', '3', '2', 'L', 'N', 0,
  /* 2105 */ 'E', 'D', 'G', 'E', '1', '6', 'L', 'N', 0,
  /* 2114 */ 'E', 'D', 'G', 'E', '8', 'L', 'N', 0,
  /* 2122 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 2138 */ 'P', 'D', 'I', 'S', 'T', 'N', 0,
  /* 2145 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 2162 */ 'S', 'H', 'U', 'T', 'D', 'O', 'W', 'N', 0,
  /* 2171 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 2179 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 2187 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 2195 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 2203 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 2211 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 2219 */ 'F', 'Z', 'E', 'R', 'O', 0,
  /* 2225 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 2234 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 2242 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 2248 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2257 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 2266 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 2273 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 2280 */ 'U', 'N', 'I', 'M', 'P', 0,
  /* 2286 */ 'N', 'O', 'P', 0,
  /* 2290 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 2298 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 2311 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 2323 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 2338 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 2345 */ 'F', 'S', 'U', 'B', 'Q', 0,
  /* 2351 */ 'F', 'A', 'D', 'D', 'Q', 0,
  /* 2357 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'Q', 0,
  /* 2366 */ 'F', 'N', 'E', 'G', 'Q', 0,
  /* 2372 */ 'F', 'D', 'M', 'U', 'L', 'Q', 0,
  /* 2379 */ 'F', 'M', 'U', 'L', 'Q', 0,
  /* 2385 */ 'F', 'D', 'T', 'O', 'Q', 0,
  /* 2391 */ 'F', 'I', 'T', 'O', 'Q', 0,
  /* 2397 */ 'F', 'S', 'T', 'O', 'Q', 0,
  /* 2403 */ 'F', 'X', 'T', 'O', 'Q', 0,
  /* 2409 */ 'V', '9', 'F', 'C', 'M', 'P', 'Q', 0,
  /* 2417 */ 'F', 'A', 'B', 'S', 'Q', 0,
  /* 2423 */ 'F', 'S', 'Q', 'R', 'T', 'Q', 0,
  /* 2430 */ 'F', 'D', 'I', 'V', 'Q', 0,
  /* 2436 */ 'F', 'M', 'O', 'V', 'Q', 0,
  /* 2442 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'Q', 0,
  /* 2452 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'Q', 0,
  /* 2462 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'Q', 0,
  /* 2471 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'Q', 0,
  /* 2480 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'Q', 0,
  /* 2489 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'Q', 0,
  /* 2497 */ 'S', 'T', 'B', 'A', 'R', 0,
  /* 2503 */ 'R', 'D', 'T', 'B', 'R', 0,
  /* 2509 */ 'G', '_', 'B', 'R', 0,
  /* 2514 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 2527 */ 'A', 'L', 'I', 'G', 'N', 'A', 'D', 'D', 'R', 0,
  /* 2537 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 2550 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 2575 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 2582 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 2589 */ 'F', 'O', 'R', 0,
  /* 2593 */ 'F', 'N', 'O', 'R', 0,
  /* 2598 */ 'F', 'X', 'N', 'O', 'R', 0,
  /* 2604 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 2613 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2628 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 2645 */ 'F', 'X', 'O', 'R', 0,
  /* 2650 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 2656 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 2672 */ 'G', '_', 'O', 'R', 0,
  /* 2677 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 2692 */ 'R', 'D', 'P', 'R', 0,
  /* 2697 */ 'R', 'D', 'A', 'S', 'R', 0,
  /* 2703 */ 'R', 'D', 'P', 'S', 'R', 0,
  /* 2709 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 2720 */ 'F', 'S', 'R', 'C', '1', 'S', 0,
  /* 2727 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '1', 'S', 0,
  /* 2737 */ 'F', 'N', 'O', 'T', '1', 'S', 0,
  /* 2744 */ 'F', 'O', 'R', 'N', 'O', 'T', '1', 'S', 0,
  /* 2753 */ 'F', 'P', 'S', 'U', 'B', '3', '2', 'S', 0,
  /* 2762 */ 'F', 'P', 'A', 'D', 'D', '3', '2', 'S', 0,
  /* 2771 */ 'F', 'S', 'R', 'C', '2', 'S', 0,
  /* 2778 */ 'F', 'A', 'N', 'D', 'N', 'O', 'T', '2', 'S', 0,
  /* 2788 */ 'F', 'N', 'O', 'T', '2', 'S', 0,
  /* 2795 */ 'F', 'O', 'R', 'N', 'O', 'T', '2', 'S', 0,
  /* 2804 */ 'F', 'P', 'S', 'U', 'B', '1', '6', 'S', 0,
  /* 2813 */ 'F', 'P', 'A', 'D', 'D', '1', '6', 'S', 0,
  /* 2822 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 2829 */ 'F', 'S', 'U', 'B', 'S', 0,
  /* 2835 */ 'F', 'H', 'S', 'U', 'B', 'S', 0,
  /* 2842 */ 'F', 'A', 'D', 'D', 'S', 0,
  /* 2848 */ 'F', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2855 */ 'F', 'N', 'H', 'A', 'D', 'D', 'S', 0,
  /* 2863 */ 'F', 'N', 'A', 'D', 'D', 'S', 0,
  /* 2870 */ 'F', 'A', 'N', 'D', 'S', 0,
  /* 2876 */ 'F', 'N', 'A', 'N', 'D', 'S', 0,
  /* 2883 */ 'F', 'O', 'N', 'E', 'S', 0,
  /* 2889 */ 'V', '9', 'F', 'C', 'M', 'P', 'E', 'S', 0,
  /* 2898 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2915 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 2930 */ 'F', 'N', 'E', 'G', 'S', 0,
  /* 2936 */ 'F', 'M', 'U', 'L', 'S', 0,
  /* 2942 */ 'F', 'N', 'M', 'U', 'L', 'S', 0,
  /* 2949 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 2956 */ 'F', 'Z', 'E', 'R', 'O', 'S', 0,
  /* 2963 */ 'F', 'D', 'T', 'O', 'S', 0,
  /* 2969 */ 'F', 'I', 'T', 'O', 'S', 0,
  /* 2975 */ 'F', 'Q', 'T', 'O', 'S', 0,
  /* 2981 */ 'M', 'O', 'V', 'W', 'T', 'O', 'S', 0,
  /* 2989 */ 'F', 'X', 'T', 'O', 'S', 0,
  /* 2995 */ 'V', '9', 'F', 'C', 'M', 'P', 'S', 0,
  /* 3003 */ 'F', 'L', 'C', 'M', 'P', 'S', 0,
  /* 3010 */ 'F', 'O', 'R', 'S', 0,
  /* 3015 */ 'F', 'N', 'O', 'R', 'S', 0,
  /* 3021 */ 'F', 'X', 'N', 'O', 'R', 'S', 0,
  /* 3028 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 3045 */ 'F', 'X', 'O', 'R', 'S', 0,
  /* 3051 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3068 */ 'F', 'A', 'B', 'S', 'S', 0,
  /* 3074 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 3104 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 3131 */ 'F', 'S', 'Q', 'R', 'T', 'S', 0,
  /* 3138 */ 'F', 'D', 'I', 'V', 'S', 0,
  /* 3144 */ 'F', 'M', 'O', 'V', 'S', 0,
  /* 3150 */ 'F', 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'S', 0,
  /* 3160 */ 'F', 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'S', 0,
  /* 3170 */ 'F', 'M', 'O', 'V', 'R', 'G', 'Z', 'S', 0,
  /* 3179 */ 'F', 'M', 'O', 'V', 'R', 'L', 'Z', 'S', 0,
  /* 3188 */ 'F', 'M', 'O', 'V', 'R', 'N', 'Z', 'S', 0,
  /* 3197 */ 'F', 'M', 'O', 'V', 'R', 'Z', 'S', 0,
  /* 3205 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3215 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3224 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 3237 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 3251 */ 'S', 'E', 'T', 0,
  /* 3255 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 3279 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 3286 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3307 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 3327 */ 'B', 'P', 'F', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3336 */ 'B', 'P', 'I', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3345 */ 'B', 'P', 'X', 'C', 'C', 'A', 'N', 'T', 0,
  /* 3354 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3366 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 3377 */ 'B', 'P', 'F', 'C', 'C', 'N', 'T', 0,
  /* 3385 */ 'B', 'P', 'I', 'C', 'C', 'N', 'T', 0,
  /* 3393 */ 'B', 'P', 'X', 'C', 'C', 'N', 'T', 0,
  /* 3401 */ 'L', 'Z', 'C', 'N', 'T', 0,
  /* 3407 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3418 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 3429 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 3440 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 3448 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 3461 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3471 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 3486 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 3495 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 3503 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 3513 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 3530 */ 'P', 'D', 'I', 'S', 'T', 0,
  /* 3536 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 3544 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 3551 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 3560 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 3567 */ 'F', 'M', 'U', 'L', '8', 'X', '1', '6', 'A', 'U', 0,
  /* 3578 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 3585 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 3592 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 3599 */ 'F', 'L', 'U', 'S', 'H', 'W', 0,
  /* 3606 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 3613 */ 'M', 'O', 'V', 'S', 'T', 'O', 'S', 'W', 0,
  /* 3622 */ 'M', 'O', 'V', 'S', 'T', 'O', 'U', 'W', 0,
  /* 3631 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 3638 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 3645 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 3662 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 3678 */ 'G', 'E', 'T', 'P', 'C', 'X', 0,
  /* 3685 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 3699 */ 'F', 'P', 'A', 'C', 'K', 'F', 'I', 'X', 0,
  /* 3708 */ 'X', 'M', 'U', 'L', 'X', 0,
  /* 3714 */ 'F', 'D', 'T', 'O', 'X', 0,
  /* 3720 */ 'M', 'O', 'V', 'D', 'T', 'O', 'X', 0,
  /* 3728 */ 'F', 'Q', 'T', 'O', 'X', 0,
  /* 3734 */ 'F', 'S', 'T', 'O', 'X', 0,
  /* 3740 */ 'C', 'O', 'P', 'Y', 0,
  /* 3745 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 3752 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 3759 */ 'S', 'E', 'T', 'H', 'I', 'i', 0,
  /* 3766 */ 'M', 'E', 'M', 'B', 'A', 'R', 'i', 0,
  /* 3774 */ 'S', 'E', 'T', 'H', 'I', 'X', 'i', 0,
  /* 3782 */ 'S', 'R', 'A', 'r', 'i', 0,
  /* 3788 */ 'L', 'D', 'S', 'B', 'r', 'i', 0,
  /* 3795 */ 'S', 'T', 'B', 'r', 'i', 0,
  /* 3801 */ 'L', 'D', 'U', 'B', 'r', 'i', 0,
  /* 3808 */ 'S', 'U', 'B', 'r', 'i', 0,
  /* 3814 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'i', 0,
  /* 3823 */ 'S', 'M', 'A', 'C', 'r', 'i', 0,
  /* 3830 */ 'U', 'M', 'A', 'C', 'r', 'i', 0,
  /* 3837 */ 'S', 'U', 'B', 'C', 'r', 'i', 0,
  /* 3844 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'i', 0,
  /* 3853 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'i', 0,
  /* 3862 */ 'A', 'N', 'D', 'C', 'C', 'r', 'i', 0,
  /* 3870 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'i', 0,
  /* 3881 */ 'T', 'I', 'C', 'C', 'r', 'i', 0,
  /* 3888 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'i', 0,
  /* 3897 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 3906 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'i', 0,
  /* 3915 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'i', 0,
  /* 3924 */ 'O', 'R', 'N', 'C', 'C', 'r', 'i', 0,
  /* 3932 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 3941 */ 'X', 'O', 'R', 'C', 'C', 'r', 'i', 0,
  /* 3949 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'i', 0,
  /* 3958 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 3967 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'i', 0,
  /* 3976 */ 'T', 'X', 'C', 'C', 'r', 'i', 0,
  /* 3983 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'i', 0,
  /* 3992 */ 'A', 'D', 'D', 'C', 'r', 'i', 0,
  /* 3999 */ 'L', 'D', 'D', 'C', 'r', 'i', 0,
  /* 4006 */ 'L', 'D', 'C', 'r', 'i', 0,
  /* 4012 */ 'S', 'T', 'D', 'C', 'r', 'i', 0,
  /* 4019 */ 'S', 'T', 'C', 'r', 'i', 0,
  /* 4025 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 4035 */ 'L', 'E', 'A', 'X', '_', 'A', 'D', 'D', 'r', 'i', 0,
  /* 4046 */ 'L', 'D', 'D', 'r', 'i', 0,
  /* 4052 */ 'L', 'D', 'r', 'i', 0,
  /* 4057 */ 'A', 'N', 'D', 'r', 'i', 0,
  /* 4063 */ 'B', 'I', 'N', 'D', 'r', 'i', 0,
  /* 4070 */ 'S', 'T', 'D', 'r', 'i', 0,
  /* 4076 */ 'S', 'U', 'B', 'E', 'r', 'i', 0,
  /* 4083 */ 'A', 'D', 'D', 'E', 'r', 'i', 0,
  /* 4090 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'i', 0,
  /* 4100 */ 'S', 'A', 'V', 'E', 'r', 'i', 0,
  /* 4107 */ 'L', 'D', 'D', 'F', 'r', 'i', 0,
  /* 4114 */ 'L', 'D', 'F', 'r', 'i', 0,
  /* 4120 */ 'S', 'T', 'D', 'F', 'r', 'i', 0,
  /* 4127 */ 'L', 'D', 'Q', 'F', 'r', 'i', 0,
  /* 4134 */ 'S', 'T', 'Q', 'F', 'r', 'i', 0,
  /* 4141 */ 'S', 'T', 'F', 'r', 'i', 0,
  /* 4147 */ 'L', 'D', 'S', 'H', 'r', 'i', 0,
  /* 4154 */ 'F', 'L', 'U', 'S', 'H', 'r', 'i', 0,
  /* 4162 */ 'S', 'T', 'H', 'r', 'i', 0,
  /* 4168 */ 'L', 'D', 'U', 'H', 'r', 'i', 0,
  /* 4175 */ 'C', 'A', 'L', 'L', 'r', 'i', 0,
  /* 4182 */ 'S', 'L', 'L', 'r', 'i', 0,
  /* 4188 */ 'J', 'M', 'P', 'L', 'r', 'i', 0,
  /* 4195 */ 'S', 'R', 'L', 'r', 'i', 0,
  /* 4201 */ 'S', 'M', 'U', 'L', 'r', 'i', 0,
  /* 4208 */ 'U', 'M', 'U', 'L', 'r', 'i', 0,
  /* 4215 */ 'W', 'R', 'W', 'I', 'M', 'r', 'i', 0,
  /* 4223 */ 'A', 'N', 'D', 'N', 'r', 'i', 0,
  /* 4230 */ 'O', 'R', 'N', 'r', 'i', 0,
  /* 4236 */ 'T', 'R', 'A', 'P', 'r', 'i', 0,
  /* 4243 */ 'S', 'W', 'A', 'P', 'r', 'i', 0,
  /* 4250 */ 'C', 'M', 'P', 'r', 'i', 0,
  /* 4256 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'i', 0,
  /* 4264 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'i', 0,
  /* 4272 */ 'W', 'R', 'T', 'B', 'R', 'r', 'i', 0,
  /* 4280 */ 'X', 'N', 'O', 'R', 'r', 'i', 0,
  /* 4287 */ 'X', 'O', 'R', 'r', 'i', 0,
  /* 4293 */ 'W', 'R', 'P', 'R', 'r', 'i', 0,
  /* 4300 */ 'W', 'R', 'A', 'S', 'R', 'r', 'i', 0,
  /* 4308 */ 'L', 'D', 'C', 'S', 'R', 'r', 'i', 0,
  /* 4316 */ 'S', 'T', 'C', 'S', 'R', 'r', 'i', 0,
  /* 4324 */ 'L', 'D', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4332 */ 'S', 'T', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4340 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4349 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'i', 0,
  /* 4358 */ 'P', 'W', 'R', 'P', 'S', 'R', 'r', 'i', 0,
  /* 4367 */ 'S', 'T', 'r', 'i', 0,
  /* 4372 */ 'R', 'E', 'T', 'T', 'r', 'i', 0,
  /* 4379 */ 'S', 'D', 'I', 'V', 'r', 'i', 0,
  /* 4386 */ 'U', 'D', 'I', 'V', 'r', 'i', 0,
  /* 4393 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 4404 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'i', 0,
  /* 4415 */ 'L', 'D', 'S', 'W', 'r', 'i', 0,
  /* 4422 */ 'S', 'R', 'A', 'X', 'r', 'i', 0,
  /* 4429 */ 'S', 'U', 'B', 'X', 'r', 'i', 0,
  /* 4436 */ 'A', 'D', 'D', 'X', 'r', 'i', 0,
  /* 4443 */ 'L', 'D', 'X', 'r', 'i', 0,
  /* 4449 */ 'A', 'N', 'D', 'X', 'r', 'i', 0,
  /* 4456 */ 'S', 'L', 'L', 'X', 'r', 'i', 0,
  /* 4463 */ 'S', 'R', 'L', 'X', 'r', 'i', 0,
  /* 4470 */ 'M', 'U', 'L', 'X', 'r', 'i', 0,
  /* 4477 */ 'X', 'O', 'R', 'X', 'r', 'i', 0,
  /* 4484 */ 'S', 'T', 'X', 'r', 'i', 0,
  /* 4490 */ 'S', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 4498 */ 'U', 'D', 'I', 'V', 'X', 'r', 'i', 0,
  /* 4506 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'i', 0,
  /* 4516 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'i', 0,
  /* 4526 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'i', 0,
  /* 4535 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'i', 0,
  /* 4544 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'i', 0,
  /* 4553 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'i', 0,
  /* 4562 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 4571 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 'n', 0,
  /* 4580 */ 'B', 'P', 'G', 'Z', 'a', 'p', 'n', 0,
  /* 4588 */ 'B', 'P', 'L', 'Z', 'a', 'p', 'n', 0,
  /* 4596 */ 'B', 'P', 'N', 'Z', 'a', 'p', 'n', 0,
  /* 4604 */ 'B', 'P', 'Z', 'a', 'p', 'n', 0,
  /* 4611 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4621 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4631 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4640 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4649 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4658 */ 'B', 'P', 'Z', 'n', 'a', 'p', 'n', 0,
  /* 4666 */ 'L', 'D', 'S', 'B', 'A', 'r', 'r', 0,
  /* 4674 */ 'S', 'T', 'B', 'A', 'r', 'r', 0,
  /* 4681 */ 'L', 'D', 'U', 'B', 'A', 'r', 'r', 0,
  /* 4689 */ 'L', 'D', 'S', 'T', 'U', 'B', 'A', 'r', 'r', 0,
  /* 4699 */ 'L', 'D', 'D', 'A', 'r', 'r', 0,
  /* 4706 */ 'L', 'D', 'A', 'r', 'r', 0,
  /* 4712 */ 'S', 'T', 'D', 'A', 'r', 'r', 0,
  /* 4719 */ 'L', 'D', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4727 */ 'L', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4734 */ 'S', 'T', 'D', 'F', 'A', 'r', 'r', 0,
  /* 4742 */ 'L', 'D', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 4750 */ 'S', 'T', 'Q', 'F', 'A', 'r', 'r', 0,
  /* 4758 */ 'S', 'T', 'F', 'A', 'r', 'r', 0,
  /* 4765 */ 'L', 'D', 'S', 'H', 'A', 'r', 'r', 0,
  /* 4773 */ 'S', 'T', 'H', 'A', 'r', 'r', 0,
  /* 4780 */ 'L', 'D', 'U', 'H', 'A', 'r', 'r', 0,
  /* 4788 */ 'S', 'W', 'A', 'P', 'A', 'r', 'r', 0,
  /* 4796 */ 'S', 'R', 'A', 'r', 'r', 0,
  /* 4802 */ 'C', 'A', 'S', 'A', 'r', 'r', 0,
  /* 4809 */ 'S', 'T', 'A', 'r', 'r', 0,
  /* 4815 */ 'L', 'D', 'S', 'B', 'r', 'r', 0,
  /* 4822 */ 'S', 'T', 'B', 'r', 'r', 0,
  /* 4828 */ 'L', 'D', 'U', 'B', 'r', 'r', 0,
  /* 4835 */ 'S', 'U', 'B', 'r', 'r', 0,
  /* 4841 */ 'L', 'D', 'S', 'T', 'U', 'B', 'r', 'r', 0,
  /* 4850 */ 'S', 'M', 'A', 'C', 'r', 'r', 0,
  /* 4857 */ 'U', 'M', 'A', 'C', 'r', 'r', 0,
  /* 4864 */ 'S', 'U', 'B', 'C', 'r', 'r', 0,
  /* 4871 */ 'T', 'S', 'U', 'B', 'C', 'C', 'r', 'r', 0,
  /* 4880 */ 'T', 'A', 'D', 'D', 'C', 'C', 'r', 'r', 0,
  /* 4889 */ 'A', 'N', 'D', 'C', 'C', 'r', 'r', 0,
  /* 4897 */ 'V', '9', 'M', 'O', 'V', 'F', 'C', 'C', 'r', 'r', 0,
  /* 4908 */ 'T', 'I', 'C', 'C', 'r', 'r', 0,
  /* 4915 */ 'M', 'O', 'V', 'I', 'C', 'C', 'r', 'r', 0,
  /* 4924 */ 'S', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 4933 */ 'U', 'M', 'U', 'L', 'C', 'C', 'r', 'r', 0,
  /* 4942 */ 'A', 'N', 'D', 'N', 'C', 'C', 'r', 'r', 0,
  /* 4951 */ 'O', 'R', 'N', 'C', 'C', 'r', 'r', 0,
  /* 4959 */ 'X', 'N', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 4968 */ 'X', 'O', 'R', 'C', 'C', 'r', 'r', 0,
  /* 4976 */ 'M', 'U', 'L', 'S', 'C', 'C', 'r', 'r', 0,
  /* 4985 */ 'S', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 4994 */ 'U', 'D', 'I', 'V', 'C', 'C', 'r', 'r', 0,
  /* 5003 */ 'T', 'X', 'C', 'C', 'r', 'r', 0,
  /* 5010 */ 'M', 'O', 'V', 'X', 'C', 'C', 'r', 'r', 0,
  /* 5019 */ 'A', 'D', 'D', 'C', 'r', 'r', 0,
  /* 5026 */ 'L', 'D', 'D', 'C', 'r', 'r', 0,
  /* 5033 */ 'L', 'D', 'C', 'r', 'r', 0,
  /* 5039 */ 'S', 'T', 'D', 'C', 'r', 'r', 0,
  /* 5046 */ 'P', 'O', 'P', 'C', 'r', 'r', 0,
  /* 5053 */ 'S', 'T', 'C', 'r', 'r', 0,
  /* 5059 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'r', 'r', 0,
  /* 5069 */ 'L', 'D', 'D', 'r', 'r', 0,
  /* 5075 */ 'T', 'L', 'S', '_', 'L', 'D', 'r', 'r', 0,
  /* 5084 */ 'A', 'N', 'D', 'r', 'r', 0,
  /* 5090 */ 'B', 'I', 'N', 'D', 'r', 'r', 0,
  /* 5097 */ 'S', 'T', 'D', 'r', 'r', 0,
  /* 5103 */ 'S', 'U', 'B', 'E', 'r', 'r', 0,
  /* 5110 */ 'A', 'D', 'D', 'E', 'r', 'r', 0,
  /* 5117 */ 'R', 'E', 'S', 'T', 'O', 'R', 'E', 'r', 'r', 0,
  /* 5127 */ 'S', 'A', 'V', 'E', 'r', 'r', 0,
  /* 5134 */ 'L', 'D', 'D', 'F', 'r', 'r', 0,
  /* 5141 */ 'L', 'D', 'F', 'r', 'r', 0,
  /* 5147 */ 'S', 'T', 'D', 'F', 'r', 'r', 0,
  /* 5154 */ 'L', 'D', 'Q', 'F', 'r', 'r', 0,
  /* 5161 */ 'S', 'T', 'Q', 'F', 'r', 'r', 0,
  /* 5168 */ 'S', 'T', 'F', 'r', 'r', 0,
  /* 5174 */ 'L', 'D', 'S', 'H', 'r', 'r', 0,
  /* 5181 */ 'F', 'L', 'U', 'S', 'H', 'r', 'r', 0,
  /* 5189 */ 'S', 'T', 'H', 'r', 'r', 0,
  /* 5195 */ 'L', 'D', 'U', 'H', 'r', 'r', 0,
  /* 5202 */ 'C', 'A', 'L', 'L', 'r', 'r', 0,
  /* 5209 */ 'S', 'L', 'L', 'r', 'r', 0,
  /* 5215 */ 'J', 'M', 'P', 'L', 'r', 'r', 0,
  /* 5222 */ 'S', 'R', 'L', 'r', 'r', 0,
  /* 5228 */ 'S', 'M', 'U', 'L', 'r', 'r', 0,
  /* 5235 */ 'U', 'M', 'U', 'L', 'r', 'r', 0,
  /* 5242 */ 'W', 'R', 'W', 'I', 'M', 'r', 'r', 0,
  /* 5250 */ 'A', 'N', 'D', 'N', 'r', 'r', 0,
  /* 5257 */ 'O', 'R', 'N', 'r', 'r', 0,
  /* 5263 */ 'A', 'N', 'D', 'X', 'N', 'r', 'r', 0,
  /* 5271 */ 'O', 'R', 'X', 'N', 'r', 'r', 0,
  /* 5278 */ 'T', 'R', 'A', 'P', 'r', 'r', 0,
  /* 5285 */ 'S', 'W', 'A', 'P', 'r', 'r', 0,
  /* 5292 */ 'C', 'M', 'P', 'r', 'r', 0,
  /* 5298 */ 'S', 'T', 'D', 'C', 'Q', 'r', 'r', 0,
  /* 5306 */ 'S', 'T', 'D', 'F', 'Q', 'r', 'r', 0,
  /* 5314 */ 'W', 'R', 'T', 'B', 'R', 'r', 'r', 0,
  /* 5322 */ 'X', 'N', 'O', 'R', 'r', 'r', 0,
  /* 5329 */ 'X', 'O', 'R', 'r', 'r', 0,
  /* 5335 */ 'W', 'R', 'P', 'R', 'r', 'r', 0,
  /* 5342 */ 'W', 'R', 'A', 'S', 'R', 'r', 'r', 0,
  /* 5350 */ 'L', 'D', 'C', 'S', 'R', 'r', 'r', 0,
  /* 5358 */ 'S', 'T', 'C', 'S', 'R', 'r', 'r', 0,
  /* 5366 */ 'L', 'D', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5374 */ 'S', 'T', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5382 */ 'L', 'D', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5391 */ 'S', 'T', 'X', 'F', 'S', 'R', 'r', 'r', 0,
  /* 5400 */ 'P', 'W', 'R', 'P', 'S', 'R', 'r', 'r', 0,
  /* 5409 */ 'C', 'A', 'S', 'r', 'r', 0,
  /* 5415 */ 'S', 'T', 'r', 'r', 0,
  /* 5420 */ 'R', 'E', 'T', 'T', 'r', 'r', 0,
  /* 5427 */ 'S', 'D', 'I', 'V', 'r', 'r', 0,
  /* 5434 */ 'U', 'D', 'I', 'V', 'r', 'r', 0,
  /* 5441 */ 'T', 'S', 'U', 'B', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 5452 */ 'T', 'A', 'D', 'D', 'C', 'C', 'T', 'V', 'r', 'r', 0,
  /* 5463 */ 'L', 'D', 'S', 'W', 'r', 'r', 0,
  /* 5470 */ 'S', 'R', 'A', 'X', 'r', 'r', 0,
  /* 5477 */ 'S', 'U', 'B', 'X', 'r', 'r', 0,
  /* 5484 */ 'T', 'L', 'S', '_', 'A', 'D', 'D', 'X', 'r', 'r', 0,
  /* 5495 */ 'T', 'L', 'S', '_', 'L', 'D', 'X', 'r', 'r', 0,
  /* 5505 */ 'A', 'N', 'D', 'X', 'r', 'r', 0,
  /* 5512 */ 'S', 'L', 'L', 'X', 'r', 'r', 0,
  /* 5519 */ 'S', 'R', 'L', 'X', 'r', 'r', 0,
  /* 5526 */ 'M', 'U', 'L', 'X', 'r', 'r', 0,
  /* 5533 */ 'X', 'N', 'O', 'R', 'X', 'r', 'r', 0,
  /* 5541 */ 'X', 'O', 'R', 'X', 'r', 'r', 0,
  /* 5548 */ 'C', 'A', 'S', 'X', 'r', 'r', 0,
  /* 5555 */ 'S', 'T', 'X', 'r', 'r', 0,
  /* 5561 */ 'S', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 5569 */ 'U', 'D', 'I', 'V', 'X', 'r', 'r', 0,
  /* 5577 */ 'M', 'O', 'V', 'R', 'G', 'E', 'Z', 'r', 'r', 0,
  /* 5587 */ 'M', 'O', 'V', 'R', 'L', 'E', 'Z', 'r', 'r', 0,
  /* 5597 */ 'M', 'O', 'V', 'R', 'G', 'Z', 'r', 'r', 0,
  /* 5606 */ 'M', 'O', 'V', 'R', 'L', 'Z', 'r', 'r', 0,
  /* 5615 */ 'M', 'O', 'V', 'R', 'N', 'Z', 'r', 'r', 0,
  /* 5624 */ 'M', 'O', 'V', 'R', 'R', 'Z', 'r', 'r', 0,
  /* 5633 */ 'B', 'P', 'G', 'E', 'Z', 'a', 'p', 't', 0,
  /* 5642 */ 'B', 'P', 'L', 'E', 'Z', 'a', 'p', 't', 0,
  /* 5651 */ 'B', 'P', 'G', 'Z', 'a', 'p', 't', 0,
  /* 5659 */ 'B', 'P', 'L', 'Z', 'a', 'p', 't', 0,
  /* 5667 */ 'B', 'P', 'N', 'Z', 'a', 'p', 't', 0,
  /* 5675 */ 'B', 'P', 'Z', 'a', 'p', 't', 0,
  /* 5682 */ 'B', 'P', 'G', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5692 */ 'B', 'P', 'L', 'E', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5702 */ 'B', 'P', 'G', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5711 */ 'B', 'P', 'L', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5720 */ 'B', 'P', 'N', 'Z', 'n', 'a', 'p', 't', 0,
  /* 5729 */ 'B', 'P', 'Z', 'n', 'a', 'p', 't', 0,
};

extern const unsigned SparcInstrNameIndices[] = {
    1614U, 1955U, 2514U, 2122U, 1740U, 1721U, 1749U, 1889U, 
    1498U, 1513U, 1478U, 1527U, 3051U, 1399U, 1730U, 1277U, 
    3740U, 1357U, 3471U, 1055U, 2225U, 1877U, 3418U, 1156U, 
    3407U, 1378U, 2311U, 2298U, 2550U, 3237U, 3255U, 1800U, 
    1856U, 1829U, 1766U, 904U, 494U, 1917U, 3585U, 3592U, 
    1935U, 1942U, 1033U, 2672U, 2650U, 1476U, 1612U, 3685U, 
    1409U, 3205U, 2898U, 3486U, 2915U, 2613U, 828U, 3028U, 
    3429U, 2709U, 3503U, 802U, 1091U, 877U, 855U, 866U, 
    1391U, 3074U, 1541U, 1558U, 910U, 500U, 1039U, 1008U, 
    2677U, 2656U, 3662U, 2073U, 3645U, 2056U, 1269U, 1082U, 
    3224U, 780U, 3104U, 3551U, 820U, 3366U, 3354U, 3461U, 
    1582U, 3544U, 3560U, 1786U, 2582U, 2575U, 2273U, 2266U, 
    3215U, 2195U, 1298U, 2179U, 1261U, 2187U, 1290U, 2171U, 
    1253U, 2211U, 2203U, 1598U, 1590U, 897U, 487U, 1910U, 
    469U, 3578U, 1928U, 3606U, 2338U, 178U, 1575U, 170U, 
    0U, 1491U, 3536U, 792U, 1652U, 1661U, 2248U, 2257U, 
    2822U, 2030U, 1424U, 1987U, 1997U, 1306U, 1321U, 1965U, 
    1976U, 2242U, 1676U, 2042U, 3631U, 2049U, 3638U, 2509U, 
    3279U, 3307U, 3286U, 2628U, 3752U, 1458U, 3745U, 1440U, 
    2290U, 2234U, 1792U, 2949U, 2089U, 3495U, 2604U, 3440U, 
    3448U, 3513U, 2537U, 1344U, 2145U, 2323U, 3678U, 542U, 
    653U, 578U, 689U, 619U, 726U, 560U, 671U, 3251U, 
    3854U, 4881U, 3992U, 5019U, 4083U, 5110U, 849U, 516U, 
    4436U, 5488U, 4029U, 5063U, 2527U, 1894U, 3862U, 4889U, 
    3915U, 4942U, 4223U, 5250U, 5263U, 4449U, 5505U, 4057U, 
    5084U, 401U, 156U, 422U, 429U, 1069U, 454U, 4063U, 
    5090U, 1670U, 524U, 432U, 3327U, 3377U, 4562U, 5633U, 
    4611U, 5682U, 4580U, 5651U, 4631U, 5702U, 637U, 439U, 
    3336U, 3385U, 4571U, 5642U, 4621U, 5692U, 4588U, 5659U, 
    4640U, 5711U, 4596U, 5667U, 4649U, 5720U, 744U, 446U, 
    3345U, 3393U, 4604U, 5675U, 4658U, 5729U, 1364U, 1815U, 
    4175U, 5202U, 9U, 4802U, 5548U, 5409U, 1068U, 453U, 
    281U, 108U, 415U, 4250U, 5292U, 248U, 1695U, 2105U, 
    2015U, 75U, 1687U, 2096U, 2007U, 409U, 1703U, 2114U, 
    2023U, 1173U, 2417U, 3068U, 926U, 2351U, 2842U, 475U, 
    997U, 29U, 2727U, 186U, 2778U, 2870U, 1075U, 461U, 
    303U, 1143U, 320U, 130U, 337U, 147U, 255U, 82U, 
    264U, 91U, 2411U, 2997U, 1186U, 2430U, 3138U, 2372U, 
    1634U, 2385U, 2963U, 3714U, 1025U, 932U, 2848U, 890U, 
    2835U, 1109U, 2391U, 2969U, 1149U, 3003U, 1606U, 3599U, 
    4154U, 5181U, 312U, 1192U, 532U, 643U, 750U, 2436U, 
    597U, 706U, 760U, 1198U, 2442U, 3150U, 1218U, 2462U, 
    3170U, 1208U, 2452U, 3160U, 1227U, 2471U, 3179U, 1236U, 
    2480U, 3188U, 1245U, 2489U, 3197U, 3144U, 609U, 716U, 
    770U, 390U, 367U, 346U, 1710U, 3567U, 969U, 378U, 
    355U, 2379U, 2936U, 947U, 2863U, 1002U, 2876U, 963U, 
    2366U, 2930U, 939U, 2855U, 975U, 2942U, 2593U, 3015U, 
    38U, 2737U, 195U, 2788U, 989U, 1373U, 2883U, 2589U, 
    44U, 2744U, 201U, 2795U, 3010U, 273U, 100U, 3699U, 
    240U, 2813U, 67U, 2762U, 213U, 1336U, 232U, 2804U, 
    59U, 2753U, 1115U, 1640U, 2975U, 3728U, 329U, 139U, 
    289U, 116U, 982U, 1179U, 2423U, 3131U, 225U, 52U, 
    23U, 2720U, 164U, 2771U, 296U, 123U, 1121U, 1646U, 
    2397U, 3734U, 884U, 2345U, 2829U, 2598U, 3021U, 2645U, 
    3045U, 1127U, 2403U, 2989U, 2219U, 2956U, 4188U, 5215U, 
    4706U, 4308U, 5350U, 4006U, 5033U, 4699U, 3999U, 5026U, 
    4719U, 4107U, 5134U, 4046U, 5069U, 4727U, 4324U, 5366U, 
    4114U, 5141U, 4742U, 4127U, 5154U, 4666U, 3788U, 4815U, 
    4765U, 4147U, 5174U, 4689U, 3814U, 4841U, 4415U, 5463U, 
    4681U, 3801U, 4828U, 4780U, 4168U, 5195U, 4340U, 5382U, 
    4443U, 5499U, 4052U, 5079U, 4035U, 4025U, 3401U, 3766U, 
    3720U, 3872U, 4899U, 3888U, 4915U, 4506U, 5577U, 4526U, 
    5597U, 4516U, 5587U, 4535U, 5606U, 4544U, 5615U, 4553U, 
    5624U, 3613U, 3622U, 2981U, 3983U, 5010U, 1133U, 3949U, 
    4976U, 4470U, 5526U, 2286U, 3934U, 4961U, 3924U, 4951U, 
    4230U, 5257U, 5271U, 4478U, 5535U, 4282U, 5324U, 3530U, 
    2138U, 5046U, 4358U, 5400U, 2697U, 2692U, 2703U, 2503U, 
    1949U, 4090U, 5117U, 3247U, 1905U, 4372U, 5420U, 4100U, 
    5127U, 3958U, 4985U, 4490U, 5561U, 4379U, 5427U, 3774U, 
    3759U, 2162U, 1923U, 4456U, 5512U, 4182U, 5209U, 3823U, 
    4850U, 3897U, 4924U, 4201U, 5228U, 4422U, 5470U, 3782U, 
    4796U, 4463U, 5519U, 4195U, 5222U, 4809U, 2497U, 4674U, 
    3795U, 4822U, 4316U, 5358U, 4019U, 5053U, 4712U, 4256U, 
    5298U, 4012U, 5039U, 4734U, 4264U, 5306U, 4120U, 5147U, 
    4070U, 5097U, 4758U, 4332U, 5374U, 4141U, 5168U, 4773U, 
    4162U, 5189U, 4750U, 4134U, 5161U, 4349U, 5391U, 4484U, 
    5555U, 4367U, 5415U, 3845U, 4872U, 3837U, 4864U, 4076U, 
    5103U, 4429U, 5477U, 3808U, 4835U, 4788U, 4243U, 5285U, 
    19U, 209U, 221U, 4404U, 5452U, 3853U, 4880U, 3881U, 
    4908U, 5484U, 5059U, 1820U, 5495U, 5075U, 4236U, 5278U, 
    4393U, 5441U, 3844U, 4871U, 3976U, 5003U, 3967U, 4994U, 
    4498U, 5569U, 4386U, 5434U, 3830U, 4857U, 3906U, 4933U, 
    1618U, 4208U, 5235U, 2280U, 1141U, 954U, 2357U, 2889U, 
    2409U, 2995U, 530U, 595U, 607U, 3870U, 4897U, 4300U, 
    5342U, 4293U, 5335U, 4359U, 5401U, 4272U, 5314U, 4215U, 
    5242U, 3708U, 1626U, 3932U, 4959U, 5533U, 4280U, 5322U, 
    3941U, 4968U, 4477U, 5541U, 4287U, 5329U, 
};

static inline void InitSparcMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 694);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct SparcGenInstrInfo : public TargetInstrInfo {
  explicit SparcGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~SparcGenInstrInfo() override = default;

};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc SparcInsts[];
extern const unsigned SparcInstrNameIndices[];
extern const char SparcInstrNameData[];
SparcGenInstrInfo::SparcGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(SparcInsts, SparcInstrNameIndices, SparcInstrNameData, 694);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace SP {
namespace OpName {
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace SP {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace SP {
namespace OpTypes {
enum OperandType {
  CCOp = 0,
  MEMri = 1,
  MEMrr = 2,
  MembarTag = 3,
  TLSSym = 4,
  bprtarget = 5,
  bprtarget16 = 6,
  brtarget = 7,
  calltarget = 8,
  f32imm = 9,
  f64imm = 10,
  getPCX = 11,
  i16imm = 12,
  i1imm = 13,
  i32imm = 14,
  i64imm = 15,
  i8imm = 16,
  ptype0 = 17,
  ptype1 = 18,
  ptype2 = 19,
  ptype3 = 20,
  ptype4 = 21,
  ptype5 = 22,
  simm13Op = 23,
  type0 = 24,
  type1 = 25,
  type2 = 26,
  type3 = 27,
  type4 = 28,
  type5 = 29,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace SP
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace SP {
LLVM_READONLY
int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const int Offsets[] = {
    0,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    5,
    8,
    12,
    13,
    17,
    20,
    20,
    21,
    23,
    25,
    25,
    26,
    27,
    29,
    29,
    35,
    36,
    36,
    38,
    39,
    39,
    39,
    39,
    39,
    39,
    41,
    44,
    44,
    47,
    50,
    53,
    56,
    59,
    62,
    65,
    68,
    71,
    74,
    75,
    76,
    78,
    80,
    83,
    85,
    89,
    91,
    93,
    95,
    97,
    99,
    101,
    103,
    105,
    107,
    109,
    111,
    113,
    115,
    120,
    124,
    127,
    130,
    133,
    136,
    139,
    142,
    145,
    148,
    151,
    154,
    157,
    159,
    161,
    162,
    163,
    164,
    166,
    168,
    170,
    172,
    173,
    176,
    178,
    180,
    183,
    186,
    189,
    193,
    197,
    201,
    205,
    210,
    214,
    219,
    223,
    228,
    232,
    237,
    241,
    245,
    248,
    251,
    254,
    257,
    260,
    264,
    267,
    270,
    273,
    275,
    277,
    279,
    281,
    283,
    285,
    287,
    289,
    291,
    293,
    295,
    297,
    299,
    302,
    304,
    307,
    310,
    313,
    316,
    319,
    322,
    325,
    328,
    331,
    334,
    337,
    340,
    341,
    344,
    348,
    351,
    355,
    357,
    359,
    361,
    363,
    365,
    367,
    369,
    371,
    373,
    375,
    377,
    379,
    381,
    383,
    385,
    387,
    389,
    391,
    392,
    396,
    400,
    404,
    408,
    412,
    416,
    420,
    424,
    426,
    429,
    432,
    435,
    438,
    441,
    444,
    447,
    450,
    453,
    456,
    459,
    462,
    465,
    468,
    471,
    474,
    477,
    480,
    483,
    486,
    489,
    492,
    495,
    498,
    501,
    504,
    507,
    510,
    511,
    513,
    515,
    517,
    519,
    522,
    525,
    528,
    531,
    534,
    536,
    538,
    540,
    542,
    544,
    546,
    548,
    550,
    552,
    554,
    556,
    558,
    560,
    562,
    564,
    566,
    568,
    570,
    572,
    574,
    576,
    578,
    580,
    582,
    584,
    586,
    588,
    590,
    592,
    594,
    596,
    598,
    601,
    602,
    604,
    606,
    610,
    615,
    619,
    623,
    625,
    627,
    628,
    629,
    630,
    632,
    634,
    637,
    640,
    643,
    646,
    649,
    652,
    655,
    658,
    661,
    664,
    667,
    670,
    672,
    674,
    676,
    679,
    682,
    685,
    688,
    691,
    694,
    697,
    700,
    703,
    706,
    708,
    710,
    713,
    715,
    718,
    721,
    724,
    727,
    730,
    733,
    736,
    739,
    741,
    743,
    746,
    749,
    752,
    755,
    757,
    759,
    761,
    763,
    765,
    768,
    771,
    774,
    777,
    779,
    781,
    783,
    786,
    789,
    789,
    789,
    791,
    793,
    796,
    798,
    802,
    806,
    810,
    812,
    816,
    820,
    824,
    827,
    830,
    833,
    836,
    839,
    842,
    845,
    848,
    851,
    854,
    857,
    860,
    863,
    866,
    869,
    872,
    875,
    878,
    880,
    884,
    888,
    892,
    895,
    898,
    901,
    904,
    907,
    910,
    913,
    916,
    919,
    922,
    925,
    928,
    931,
    934,
    936,
    938,
    940,
    943,
    946,
    949,
    952,
    955,
    958,
    960,
    962,
    964,
    966,
    969,
    971,
    973,
    976,
    979,
    982,
    985,
    988,
    991,
    993,
    996,
    998,
    1001,
    1004,
    1007,
    1010,
    1013,
    1016,
    1019,
    1022,
    1025,
    1028,
    1030,
    1032,
    1034,
    1036,
    1039,
    1042,
    1045,
    1048,
    1051,
    1053,
    1055,
    1057,
    1060,
    1063,
    1065,
    1067,
    1069,
    1071,
    1074,
    1077,
    1079,
    1081,
    1083,
    1085,
    1088,
    1091,
    1094,
    1097,
    1100,
    1103,
    1106,
    1108,
    1110,
    1112,
    1114,
    1116,
    1119,
    1122,
    1126,
    1128,
    1130,
    1133,
    1136,
    1140,
    1143,
    1146,
    1150,
    1153,
    1156,
    1159,
    1162,
    1166,
    1168,
    1170,
    1173,
    1176,
    1180,
    1183,
    1186,
    1190,
    1193,
    1196,
    1200,
    1203,
    1206,
    1210,
    1213,
    1216,
    1219,
    1222,
    1226,
    1229,
    1232,
    1236,
    1239,
    1242,
    1244,
    1246,
    1249,
    1252,
    1255,
    1258,
    1261,
    1264,
    1266,
    1267,
    1269,
    1273,
    1277,
    1281,
    1285,
    1288,
    1291,
    1294,
    1297,
    1300,
    1303,
    1306,
    1309,
    1312,
    1315,
    1318,
    1321,
    1323,
    1325,
    1327,
    1331,
    1335,
    1337,
    1340,
    1343,
    1346,
    1349,
    1349,
    1352,
    1355,
    1358,
    1361,
    1364,
    1367,
    1370,
    1373,
    1376,
    1379,
    1382,
    1385,
    1388,
    1390,
    1392,
    1394,
    1396,
    1398,
    1399,
    1400,
    1401,
    1404,
    1407,
    1408,
    1409,
    1411,
    1413,
    1416,
    1419,
    1422,
    1425,
    1428,
    1431,
    1434,
    1437,
    1439,
    1441,
    1441,
    1441,
    1444,
    1447,
    1450,
    1453,
    1457,
    1461,
    1464,
    1467,
    1470,
    1473,
    1476,
    1479,
    1482,
    1485,
    1488,
    1491,
    1494,
    1497,
    1501,
    1501,
    1505,
    1508,
    1511,
    1513,
    1515,
    1518,
    1521,
    1525,
    1527,
    1529,
    1532,
    1535,
    1539,
    1541,
    1543,
    1546,
    1549,
    1552,
    1555,
    1559,
    1561,
    1563,
    1566,
    1569,
    1573,
    1576,
    1579,
    1583,
    1586,
    1589,
    1591,
    1593,
    1596,
    1599,
    1602,
    1605,
    1608,
    1611,
    1614,
    1617,
    1620,
    1623,
    1626,
    1629,
    1632,
    1635,
    1640,
    1644,
    1648,
    1648,
    1648,
    1648,
    1651,
    1654,
    1657,
    1660,
    1663,
    1666,
    1670,
    1674,
    1676,
    1680,
    1684,
    1687,
    1690,
    1693,
    1696,
    1699,
    1702,
    1705,
    1708,
    1711,
    1714,
    1717,
    1720,
    1723,
    1726,
    1730,
    1734,
    1737,
    1740,
    1743,
    1746,
    1749,
    1750,
    1753,
    1756,
    1759,
    1762,
    1765,
    1768,
    1773,
    1778,
    1783,
    1788,
    1793,
    1796,
    1799,
    1802,
    1805,
    1807,
    1809,
    1811,
    1813,
    1815,
    1817,
    1820,
    1823,
    1826,
    1829,
    1832,
    1835,
    1838,
    1841,
    1844,
    1847,
    1850,
    1853,
  };
  const int OpcodeOperandTypes[] = {
    -1, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    /**/
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i64imm, OpTypes::i32imm, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, 
    /**/
    -1, OpTypes::i32imm, 
    -1, 
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, OpTypes::i8imm, 
    OpTypes::i16imm, -1, OpTypes::i32imm, 
    /**/
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    -1, 
    -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    -1, 
    OpTypes::ptype0, -1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::getPCX, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, OpTypes::i32imm, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    OpTypes::brtarget, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, -1, -1, 
    OpTypes::bprtarget, OpTypes::CCOp, -1, 
    OpTypes::bprtarget, OpTypes::CCOp, -1, 
    OpTypes::bprtarget, OpTypes::CCOp, -1, 
    OpTypes::bprtarget, OpTypes::CCOp, -1, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    OpTypes::bprtarget, OpTypes::CCOp, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, OpTypes::bprtarget16, 
    -1, -1, -1, 
    OpTypes::calltarget, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, -1, -1, -1, 
    -1, -1, -1, -1, OpTypes::i8imm, 
    -1, -1, -1, -1, 
    -1, -1, -1, -1, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    -1, 
    -1, 
    -1, 
    -1, OpTypes::simm13Op, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    OpTypes::brtarget, OpTypes::CCOp, 
    OpTypes::brtarget, OpTypes::CCOp, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    /**/
    /**/
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, 
    OpTypes::MembarTag, 
    -1, -1, 
    -1, OpTypes::i32imm, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, OpTypes::i32imm, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, OpTypes::i32imm, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::CCOp, 
    -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    /**/
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, OpTypes::simm13Op, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, 
    -1, 
    -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, OpTypes::i64imm, 
    -1, OpTypes::i32imm, 
    /**/
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, -1, 
    -1, -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    /**/
    -1, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, OpTypes::i32imm, 
    -1, -1, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, OpTypes::i32imm, -1, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, OpTypes::i8imm, -1, 
    -1, -1, OpTypes::i32imm, -1, 
    -1, -1, -1, -1, 
    /**/
    /**/
    /**/
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, OpTypes::i32imm, OpTypes::CCOp, 
    -1, -1, OpTypes::CCOp, 
    -1, -1, -1, OpTypes::TLSSym, 
    -1, -1, -1, OpTypes::TLSSym, 
    OpTypes::calltarget, OpTypes::TLSSym, 
    -1, -1, -1, OpTypes::TLSSym, 
    -1, -1, -1, OpTypes::TLSSym, 
    -1, OpTypes::i32imm, OpTypes::CCOp, 
    -1, -1, OpTypes::CCOp, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, OpTypes::i32imm, OpTypes::CCOp, 
    -1, -1, OpTypes::CCOp, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, -1, 
    -1, -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, -1, OpTypes::CCOp, 
    -1, -1, -1, -1, OpTypes::CCOp, 
    -1, -1, OpTypes::i32imm, -1, OpTypes::CCOp, 
    -1, -1, -1, -1, OpTypes::CCOp, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, OpTypes::simm13Op, 
    -1, -1, 
    -1, OpTypes::simm13Op, 
    -1, -1, 
    -1, OpTypes::simm13Op, 
    -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
    -1, -1, OpTypes::i64imm, 
    -1, -1, -1, 
    -1, -1, OpTypes::simm13Op, 
    -1, -1, -1, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace SP
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_TYPE

