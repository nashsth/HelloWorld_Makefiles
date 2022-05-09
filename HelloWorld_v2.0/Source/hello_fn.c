#include "hello.h"
#include <stdio.h>

int hello_fn(const char *text)
{
    printf("\n\r Hello %s \n\r\n\r", text);
    return 0;
}