#include<stdio.h>
#include<conio.h>

void main()
{
	int X;
	printf("Enter X :");
	scanf("%d",&X);
	
	if (X==0)
	{
	printf("Number is neutral");
	}

	else if (X>0)
	{
		printf("Number is positive");
	}
	
	else if (X<0)
{
		printf("Number is negative");
}
}