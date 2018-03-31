#ifndef _EXTMOD_PRIMITIVE_UNT64_H_
#define _EXTMOD_PRIMITIVE_UNT64_H_

#include <limits.h>

#define EXTMOD_CHECK_SYSTEM_SUPPORT_UNT64
#define EXTMOD_EXPECTED_U64_MAX 18446744073709551615ULL

#if EXTMOD_EXPECTED_U64_MAX==UCHAR_MAX
typedef unsigned char u64;
#elif EXTMOD_EXPECTED_U64_MAX==USHRT_MAX
typedef unsigned short u64;
#elif EXTMOD_EXPECTED_U64_MAX==UINT_MAX
typedef unsigned int u64;
#elif EXTMOD_EXPECTED_U64_MAX==ULONG_MAX
typedef unsigned long int u64;
#elif EXTMOD_EXPECTED_U64_MAX==ULLONG_MAX
typedef unsigned long long int u64;
#else
    #ifdef EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
        #warning System not support 64 bit unsigned integer
    #else
        #error System not support 64 bit unsigned integer (and you know this!)
    #endif // EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
    #undef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT64
#endif // EXTMOD_EXPECTED_U64_MAX

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT64
typedef struct unt64 unt64;
typedef unt64* unt64_;

struct unt64
{
    u64 u;
};

unt64 Unt64(u64);
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_UNT64

#endif // _EXTMOD_PRIMITIVE_UNT64_H_
