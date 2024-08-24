#include <stdio.h>

#include "line_utils.h"


void line_chr(int n, char chr)
{
    for (int i = 0; i < n; i++)
        printf("%c", chr);

    puts("");
}


void line(int n)
{
    line_chr(n, '-');
}
