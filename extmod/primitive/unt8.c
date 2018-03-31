#include "unt8.h"

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT8
unt8 Unt8(u8 init)
{
    unt8 u = {init};
    return u;
}
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_UNT8
