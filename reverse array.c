#include <stdio.h>

int main ()
{
 int n;
 printf("enter how many number do you want to print :");
 scanf("%d",&n);

 int arr[n];
  for (int i = 0; i < n; i++)
  {
    printf(" %d. enter number :",i+1);
    scanf("%d",& arr[i]);
  }
  
  for (int j = n; j > 0; j--)
  {
    printf(" %d. number is %d\n",j,arr[j-1]);
  }
  

  return 0;
}

  