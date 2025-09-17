#include <stdio.h>
#include <math.h>
float sr(float a,float b);

int main ()
{
  float a,b;

  printf("Enter number");
  scanf("%f",&a);
  
  printf("square root is %f",sr(a,b) );

  return 0;
}

  float sr(float a, float b)
  {
   b= pow(a,0.5);
   return b;
  }