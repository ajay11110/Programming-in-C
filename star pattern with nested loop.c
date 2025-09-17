#include <stdio.h>
int main ()
{
 char a;
 printf("Enter character to print");
 scanf("%c",&a);

 int n ,m;
 printf("Enter number of rows");
 scanf("%d",&n);

 printf("Enter number of columns");
 scanf("%d",&m);

for(int i=0;i<n;i++)
{
 for(int j=0; j<m; j++)
 {
    printf("%c",a);
 }
 printf("\n");
}
  return 0;
 }

  