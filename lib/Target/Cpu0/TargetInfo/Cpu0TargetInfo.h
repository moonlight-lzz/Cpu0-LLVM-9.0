
#ifndef LLVM_LIB_TARGET_CPU0_TARGETINFO_CPU0TARGETINFO_H
#define LLVM_LIB_TARGET_CPU0_TARGETINFO_CPU0TARGETINFO_H

namespace llvm {

class Target;

Target &getTheCpu0Target();
Target &getTheCpu0elTarget();

} // namespace llvm

#endif // LLVM_LIB_TARGET_CPU0_TARGETINFO_CPU0TARGETINFO_H
