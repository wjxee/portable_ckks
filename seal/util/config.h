// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT license.

#pragma once

#define SEAL_VERSION "3.5.6"
#define SEAL_VERSION_MAJOR 3
#define SEAL_VERSION_MINOR 5
#define SEAL_VERSION_PATCH 6

// Are we in debug mode?
#define SEAL_DEBUG

// C++17 features
#define SEAL_USE_STD_BYTE
#define SEAL_USE_SHARED_MUTEX
#define SEAL_USE_IF_CONSTEXPR
#define SEAL_USE_MAYBE_UNUSED
#define SEAL_USE_NODISCARD
/* #undef SEAL_USE_STD_FOR_EACH_N */

// Security
#define SEAL_THROW_ON_TRANSPARENT_CIPHERTEXT

// Intrinsics
#define SEAL_USE_INTRIN
/* #undef SEAL_USE__UMUL128 */
/* #undef SEAL_USE__BITSCANREVERSE64 */
#define SEAL_USE___BUILTIN_CLZLL
#define SEAL_USE___INT128
#define SEAL_USE__ADDCARRY_U64
#define SEAL_USE__SUBBORROW_U64

// Third-party dependencies
// #define SEAL_USE_MSGSL
// #define SEAL_USE_ZLIB