#include "unt64.h"

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT64
unt64 Unt64(u64 init)
{
    unt64 u = {init};
    return u;
}
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_UNT64
