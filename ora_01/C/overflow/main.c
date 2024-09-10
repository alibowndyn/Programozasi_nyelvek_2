#include <stdio.h>
#include <stdlib.h>


int main()
{
    int i = 0;
    for (unsigned char c = 0; c < 500; c++, i++)
    {
        printf("c: %-4d   i: %-4d\n", c, i);

        if (c != i)
        {
            puts("\nOverflow detected\n");
            exit(1);
        }
    }


    return 0;
}