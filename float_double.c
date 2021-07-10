#include <stdio.h>

int main(){
    
    printf("size of float data %lu\n", sizeof(float));
    printf("size of double data %lu\n", sizeof(double));
    printf("size of long double data %lu\n", sizeof(long double));
    
    
    #if 0
    int i = 960;
    float f = i*0.001f ;
    double d = i*0.001 ;
    
    printf("%.7f\n", f);
    printf("%.15lf\n", d);
    #endif 
    
    return 0;
} 
