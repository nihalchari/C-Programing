#include <stdio.h>

int main(){
    int i = 960;
    float f = i*0.001f ;
    double d = i*0.001 ;

    
    printf("%.7f\n", f);
    printf("%.16lf\n", d);
    
    return 0;
} 
