#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	
	if(a<b&&a<c)
	{
		printf("a is lowest");
	}
	else
	{
		if(b<a&&b<c)
		{
			printf("b is lowest");
		}
		else
		{
			if(c<a&&c<b)
			{
				printf("c is lowest");
			}
			else
			{
				printf("b is lowest");
			}
		}
	}
}