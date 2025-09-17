#include <stdio.h>
int main ()
{int a , b;
  printf("enter first number :\n");
  scanf("%d",&a);

   printf("enter second number :\n");
  scanf("%d",&b);

  if(a>b)
  printf("greater number is %d",a);

  else
  {
    if (a==b)
    {
        printf("numbers are equal");
    }
    else
    {
       printf("greater number is %d",b);
    }
   
  }

  return 0; }

  