#include <stdio.h>

int main()
{
char sub[1000] , verb[1000] , obj[1000];
printf("Enter 5 subjects\n");
 for (int i=0;i<5;i++)
{
 scanf("%s",&sub[i]);
}

printf("Enter 5 verbs\n");
for (int i=0;i<5;i++)
{
 scanf("%s",&verb[i]);
}

printf("Enter 5 objects\n");
for (int i=0;i<5;i++)
{
 scanf("%s",&obj[i]);
}

for(int i=0; i<5; i++)
{
printf("%s " ,sub[i]);

for(int i=0; i<5; i++)
{ int b=1;
 
printf("%s ", verb[i]);
for(int i=0; i<5 && i<b; i++)
{
printf("%s " ,obj[i]);
}
b+=1;
}

}
return 0;
}
