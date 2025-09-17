#include <stdio.h>
int main ()
{
  int a;

  printf("Enter the number");
  scanf("%d",&a);

  for(int i=3;i<=a;i++)
  {
    int b=1;
    for (int j = 2; j < i; j++)
      { 
        if (i%j==0)
         {
           b=0;
    
         }
     }

     if(b)
      {
        printf("%d\t",i);
      }

  }

  return 0; 
}

  