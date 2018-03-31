#ifndef _EXTMOD_PRIMITIVE_UNT16_H_
#define _EXTMOD_PRIMITIVE_UNT16_H_

#include <limits.h>

#define EXTMOD_CHECK_SYSTEM_SUPPORT_UNT16
#define EXTMOD_EXPECTED_U16_MAX 65535

#if EXTMOD_EXPECTED_U16_MAX==UCHAR_MAX
typedef unsigned char u16;
#elif EXTMOD_EXPECTED_U16_MAX==USHRT_MAX
typedef unsigned short u16;
#elif EXTMOD_EXPECTED_U16_MAX==UINT_MAX
typedef unsigned int u16;
#elif EXTMOD_EXPECTED_U16_MAX==ULONG_MAX
typedef unsigned long int u16;
#elif EXTMOD_EXPECTED_U16_MAX==ULLONG_MAX
typedef unsigned long long int u16;
#else
    #ifdef EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
        #warning System not support 16 bit unsigned integer
    #else
        #error System not support 16 bit unsigned integer (and you know this!)
    #endif // EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
    #undef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT16
#endif // EXTMOD_EXPECTED_U16_MAX

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT16
typedef struct unt16 unt16;
typedef unt16* unt16_;

struct unt16
{
    u16 u;
};

unt16 Unt16(u16);
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_UNT16

#endif // _EXTMOD_PRIMITIVE_UNT16_H_
