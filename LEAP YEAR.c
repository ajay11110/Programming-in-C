#include <stdio.h>

int main()
{
	int a;
	printf("ENTER YEAR :");
	scanf("%d", &a);
	
	if(a%4==0 && ( a%400==0 || a%100!=0))
	{
		printf("YEAR IS LEAP YEAR");
	}
	
    else
    {
  	printf("YEAR IS NOT A LEAP YEAR");
	
	}
	
	return 0;
}
