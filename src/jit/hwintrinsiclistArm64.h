// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.

/*****************************************************************************/
#if !defined(HARDWARE_INTRINSIC) && !defined(HARDWARE_INTRINSIC_CLASS)
#error Define HARDWARE_INTRINSIC and/or HARDWARE_INTRINSIC_CLASS before including this file
#endif
/*****************************************************************************/

// clang-format off

#if defined(HARDWARE_INTRINSIC_CLASS)
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_AES,        Aes      )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_ATOMICS,    Atomics  )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_CRC32,      Crc32    )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_DCPOP,      Dcpop    )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_DP,         Dp       )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_FCMA,       Fcma     )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_FP,         Fp       )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_FP16,       Fp16     )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_JSCVT,      Jscvt    )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_LRCPC,      Lrcpc    )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_PMULL,      Pmull    )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SHA1,       Sha1     )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SHA2,       Sha2     )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SHA512,     Sha512   )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SHA3,       Sha3     )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SIMD,       Simd     )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SIMD_V81,   Simd_v81 )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SIMD_FP16,  Simd_fp16)
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SM3,        Sm3      )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SM4,        Sm4      )
HARDWARE_INTRINSIC_CLASS(JIT_FLAG_HAS_ARM64_SVE,        Sve      )
#endif // defined(HARDWARE_INTRINSIC_CLASS)

#undef HARDWARE_INTRINSIC_CLASS
#undef HARDWARE_INTRINSIC

// clang-format on
