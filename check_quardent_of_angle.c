#include<stdio.h>

int main()
{
int a,b;

printf("enter angle in degree:");
scanf("%d",&a);

b=a%360;

if(b>0 && b<90)
{
    printf("1st quadrant");
}
else if(b>=90 && b<180)
{
    printf("2nd quadrant");
}
else if(b>=180 && b<270)
{
    printf("3rd quadrant");
}
else if(b>=270 && b<360)
{
    printf("4th quadrant");
}
else
{
    printf("Invalid angle");
}

    return 0;
}