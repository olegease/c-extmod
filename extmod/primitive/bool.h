#ifndef _EXTMOD_PRIMITIVE_BOOL_H_
#define _EXTMOD_PRIMITIVE_BOOL_H_

#define FALSE 0
#define TRUE 1

typedef struct bool bool;
typedef bool* bool_;

struct bool
{
    _Bool is;
};

bool False();
bool True();

#define false False()
#define true True()

bool Bool(int);

#endif // _EXTMOD_PRIMITIVE_BOOL_H_
