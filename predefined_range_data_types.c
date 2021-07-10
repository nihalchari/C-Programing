#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("CHAR_BIT    :   %d\n", CHAR_BIT);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("\n");
    
    
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);
    printf("\n");
    
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("\n");
    
    
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    
    return 0;
}
