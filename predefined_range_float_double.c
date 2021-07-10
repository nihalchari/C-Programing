#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(void) {

    printf("Storage size for float : %lu \n", sizeof(float));
    printf("FLT_MAX     :   %g\n", (float) FLT_MAX);
    printf("FLT_MIN     :   %g\n", (float) FLT_MIN);
    printf("-FLT_MAX    :   %g\n", (float) -FLT_MAX);
    printf("-FLT_MIN    :   %g\n", (float) -FLT_MIN);
    printf("DBL_MAX     :   %g\n", (double) DBL_MAX);
    printf("DBL_MIN     :   %g\n", (double) DBL_MIN);
    printf("-DBL_MAX     :  %g\n", (double) -DBL_MAX);
    printf("Precision value: %d\n", FLT_DIG );
    
    
  float f_max = FLT_MAX;
  printf("%.7f\n",f_max);
  ++f_max;
  printf("%.7f\n",f_max);
  
  float f_min = FLT_MIN;
  printf("%.7f\n",f_min);
  
  double d_max = DBL_MAX;
  printf("%.15f\n",d_max);
  ++d_max;
  printf("%.15f\n",d_max);
    
  
  double d_min = DBL_MIN;
  printf("%.15f\n",d_min);

    return 0;
}
