#include <stdio.h>
#include <limits.h>


int main()
{
    puts("Data type              Size in bytes\n");


    printf("char                         %ld\n"
           "signed char                  %ld\n"
           "unsigned char                %ld\n",
           sizeof(char), sizeof(signed char), sizeof(unsigned char));


    puts("");
    printf("short                        %ld\n"
           "short int                    %ld\n"
           "signed short                 %ld\n"
           "signed short int             %ld\n"
           "unsigned short               %ld\n"
           "unsigned short int           %ld\n",
           sizeof(short), sizeof(short int), sizeof(signed short),
           sizeof(signed short int), sizeof(unsigned short), sizeof(unsigned short int));


    puts("");
    printf("int                          %ld\n"
           "signed                       %ld\n"
           "signed int                   %ld\n"
           "unsigned                     %ld\n"
           "unsigned int                 %ld\n",
           sizeof(int), sizeof(signed), sizeof(signed int),
           sizeof(unsigned), sizeof(unsigned int));


    puts("");
    printf("long                         %ld\n"
           "long int                     %ld\n"
           "signed long                  %ld\n"
           "signed long int              %ld\n"
           "unsigned long                %ld\n"
           "unsigned long int            %ld\n",
           sizeof(long), sizeof(long int), sizeof(signed long),
           sizeof(signed long int), sizeof(unsigned long), sizeof(unsigned long int));


    puts("");
    printf("long long                    %ld\n"
           "long long int                %ld\n"
           "signed long long             %ld\n"
           "signed long long int         %ld\n"
           "unsigned long long           %ld\n"
           "unsigned long long int       %ld\n",
           sizeof(long long), sizeof(long long int), sizeof(signed long long),
           sizeof(signed long long int), sizeof(unsigned long long),
           sizeof(unsigned long long int));


    puts("");
    printf("float                        %ld\n"
           "double                       %ld\n"
           "long double                  %ld\n",
           sizeof(float), sizeof(double), sizeof(long double));


    return 0;
}

