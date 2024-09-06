#include<stdio.h>
//WAP to find out max from 4 numbers using nested if //
int main()
{
	int a,b,c,d;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :\n");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :\n");
	scanf("%d",&d);
	
	
	
	if(a>b&&a>c&&a>d)
	{
		printf("a is maximum");
		
	}
	else
	{
		if(b>a&&b>c&&b>d)
		{
			printf("b is maximum");
		}
		else
		{
			if(c>a&&c>b&&c>d)
			{
				printf("c is maximum");
				
			}
			else
			{
				if(d>a&&d>b&&d>c)
				{
					printf("d is maximum");
				}
			}
		}
	}
	
	return 0;
}