#include "unt32.h"

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT32
unt32 Unt32(u32 init)
{
    unt32 u = {init};
    return u;
}
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_UNT32
