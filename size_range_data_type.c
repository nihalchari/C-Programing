#include <stdio.h>
#include <unistd.h>

int main()
{
    
    //try with other values like 128, 255, 256 for signed and unsigned
    
    #if 0
    unsigned char ch1 = 0;   // try with 127, 128, 255, 256
    char ch2 = 0;            // try with 127, 128, 255, 256
    
    ///@note : explain how bits for -128, -64 will be stored in signed char


    
    printf("char %d\n", ch1);
    printf("size of char %lu\n", sizeof(char));
    #endif
    
    
    #if 0
    unsigned int num1 =4294967295;      // max value 4 byte unsigned int can have
    printf("num1 %u\n", num1);          // must use %u format specifier as num1 is marked unsigned
    
    signed int num2 =2147483647;        // max +ve value 4 byte signed int can have    
    printf("num2 %i\n", num2);          // must use %d or %i format specifier as num1 is signed
    
    ///@note : if u use %u for signed int, and exceed range beyond limit for signed +ve value, it may print same value.
    /// it will not overflow to negative, so use %d or %i
    #endif
    
    
   // #if 0
    signed long int long_num1 = 2147483648;
    printf("long num1 %lli\n", long_num1);   
    printf("size of long int %lu \n", sizeof(long_num1));
   // #endif
    
    
    #if 0
    unsigned short int short_num1 = 65535;
    signed short int short_num2 = 32768;
    printf("size of shor int %lu \n", sizeof(short_num1));
    printf("short int num1 %hi",short_num1);     //%hu for unsigned short, %hi for signed short
    printf("short int num2 %hi",short_num2);
    #endif
    
    
    #if 0
    printf("size of int %lu\n", sizeof(int));
    printf("size of short int %lu\n", sizeof(short int));
    printf("size of long int %lu\n", sizeof(long int));
    #endif
}
