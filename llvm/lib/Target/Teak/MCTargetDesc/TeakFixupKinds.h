//===-- TeakFixupKinds.h - Teak-Specific Fixup Entries ------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_TEAKFIXUPKINDS_H
#define LLVM_TEAKFIXUPKINDS_H

#include "llvm/MC/MCFixup.h"

namespace llvm {
namespace Teak {
enum Fixups {
  fixup_teak_call_imm18 = FirstTargetFixupKind,
  fixup_teak_ptr_imm16,

  // Marker
  LastTargetFixupKind,
  NumTargetFixupKinds = LastTargetFixupKind - FirstTargetFixupKind
};
}
}

#endif
