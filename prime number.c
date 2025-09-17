#include <stdio.h>
int main ()
{
    int a;
    int b=1;
  printf("Enter your number");
  scanf("%d",&a);

 if (a==1 || a==0)
  b=0;

 else 
 {
  for (int i = 2; i < a; i++)
  {
    if (a%i==0)
    {
        b=0;
        break;
    }
  }

  }
  if(b)
     {
     printf("number is prime");
     }

  else
     {
        printf("number is not prime");
     }
  
  return 0; }

  