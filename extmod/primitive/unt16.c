#include "unt16.h"

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT16
unt16 Unt16(u16 init)
{
    unt16 u = {init};
    return u;
}
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_UNT16
