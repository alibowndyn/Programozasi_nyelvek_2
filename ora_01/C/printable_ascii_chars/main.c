#include <stdio.h>


int main()
{
    for (int i = 32; i < 127; i++)
        printf("%3d %c\n", i, (char)i);


    return 0;
}