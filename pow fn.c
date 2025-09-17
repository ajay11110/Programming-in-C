#include <stdio.h>

int pow (int a,int b);  // we are making this function

int main ()
{
  int a,b;
  printf("enter number ");
  scanf("%d",&a);

  printf("enter power ");
  scanf("%d",&b);
 
  printf("answer is %d", pow(a,b));
  return 0;
}

  int pow (int a , int b)
  {
     int c=1;
     for(int i=1; i<=b; i++)
      {
        c=a*c;

      }

      return c;
  }