#include <stdio.h>

int main()
{
    int fact =1;
    int num =0;
    int i =1;
    printf("Enter num\n");
    scanf("%d",&num);
    
    while(i<=num)
    {
        fact = fact * i;
        ++i;
    }
    
    printf("Factorial of %d is %d\n", num, fact);

    return 0;
}
