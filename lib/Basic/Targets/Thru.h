//===--- Thru.h - Declare Thru target feature support ---------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares ThruTargetInfo objects.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_CLANG_LIB_BASIC_TARGETS_THRU_H
#define LLVM_CLANG_LIB_BASIC_TARGETS_THRU_H

#include "clang/Basic/TargetInfo.h"
#include "clang/Basic/TargetOptions.h"
#include "llvm/ADT/Triple.h"
#include "llvm/Support/Compiler.h"

namespace clang {
namespace targets {

class LLVM_LIBRARY_VISIBILITY ThruTargetInfo : public TargetInfo {
  static const char *const GCCRegNames[];

public:
  ThruTargetInfo(const llvm::Triple &Triple, const TargetOptions &)
    : TargetInfo(Triple) {
    // Description string has to be kept in sync with backend string at
    // llvm/lib/Target/Thru/ThruTargetMachine.cpp
    resetDataLayout("e"
                    // 64-bit natural stack alignment
                    "-S64"
                    // 64-bit pointers, 64-bit aligned
                    "-p:64:64"
                    // 64-bit integers, 64-bit aligned
                    "-i64:64"
                    // ELF name mangling
                    "-m:e"
                    // 64-bit native integer width i.e register are 64-bit
                    "-n64"
    );
    SuitableAlign = 64;
    WCharType = SignedInt;
    WIntType = UnsignedInt;
    IntPtrType = SignedInt;
    PtrDiffType = SignedInt;
    SizeType = UnsignedInt;
  }

  void getTargetDefines(const LangOptions &Opts,
                        MacroBuilder &Builder) const override;

  ArrayRef<const char *> getGCCRegNames() const override;

  ArrayRef<TargetInfo::GCCRegAlias> getGCCRegAliases() const override;

  BuiltinVaListKind getBuiltinVaListKind() const override {
    return TargetInfo::VoidPtrBuiltinVaList;
  }

  ArrayRef<Builtin::Info> getTargetBuiltins() const override {
    return None;
  }

  bool validateAsmConstraint(const char *&Name,
                             TargetInfo::ConstraintInfo &info) const override {
    return false;
  }

  const char *getClobbers() const override {
    return "";
  }
};

} // namespace targets
} // namespace clang

#endif // LLVM_CLANG_LIB_BASIC_TARGETS_THRU_H