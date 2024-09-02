#include<stdio.h>


void main()
{
	int a,b,c;
	
	
	for(a=5; a>=1; a--)
	{
		for(c=2; c<=a; c++)
		{
			printf("  ");
		}
		for(b=a; b<=5; b++)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
}