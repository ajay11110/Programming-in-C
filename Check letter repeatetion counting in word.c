#include <stdio.h>
#include <string.h>
int main()
{
char arr[100];
char a;
int b=0;

printf("Enter word ");
scanf("%s",&arr);

printf("Enter word that you want to check  ");
scanf("%c", &a);

for (int i=0; arr[i] != '\0'; i++)
{
if (arr[i]==a)
{
b+=1;

}

}
printf("%d",b);
return 0;
}
