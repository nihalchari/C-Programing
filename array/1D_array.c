#include <stdio.h>

void print_arr(int ptr[3])
{
    for(int i =0; i<=2; ++i)
    {
        printf("ptr[%d] = %d\n", i , ptr[i]);
    }
}

int main()
{
    int arr[3];
    
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    
    print_arr(arr);

    for(int i=0; i <=2; ++i )
    {
        arr[i] = 100 * (i+1);
    }
    
    print_arr(arr);
    
    return 0;
}
