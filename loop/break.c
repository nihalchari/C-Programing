#include <stdio.h>

int main() {

while(1)
{
   printf("outer loop start..\n");
   
   while(1)
   {
       printf("inner loop start...\n");
       break;
       printf("inner loop end....\n");
   }
   //  break;
     printf("outer loop end...\n");

}

    return 0;
}
