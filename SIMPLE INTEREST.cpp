#include<stdio.h>

int main()
{
float a,b,c,d;

    printf("ENTER PRINCIPAL AMMOUNT :");
    scanf("%f",&a);

	printf("ENTER RATE :");
    scanf("%f",&b);

    printf("ENTER TIME (IN YEARS) :");
    scanf("%f",&c);

	d=a*b*c/100;
	printf("SIMPLE INTEREST FOR %f YEARS IS %f \n",c ,d);
	
	printf("MY NAME IS AJAY YADAV");

	return 0;
}
