# include <stdio.h>

int main()
{
int a;

printf("ENTER YOUR MARKS :");
scanf("%d", &a);

if(a<0 || a>100)
{
printf("PLEASE ENTER MARKS IN 0-1OO RANGE ONLY");
}	

if(a>=0 && a<25)
{
	printf("YOU GOT D GRADE");
}	

else 
{
	if(a>=0 && a<25)
{
	printf("YOU GOT D GRADE");
}	
else 
 {
 		if(a>=25 && a<50)
{
	printf("YOU GOT C GRADE");
}
else 
{
		if(a>=50 && a<75)
{
	printf("YOU GOT B GRADE");
}	
else
{
		if(a>=75 && a<95)
{
	printf("YOU GOT A GRADE");
}
else
{
		if(a>=95 && a<=100)
{
	printf("YOU GOT A+ GRADE");
}	
	}	
}
	}	
 }
}
	
	
	
	return 0;
}
