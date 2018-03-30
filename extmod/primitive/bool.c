#include "bool.h"
#include <stdio.h>
bool False()
{
    bool b = {FALSE};
    return b;
}

bool True()
{
    bool b = {TRUE};
    return b;
}

bool Bool(int init)
{
    return (init) ? true : false;
}
