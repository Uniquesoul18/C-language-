#include<stdio.h>

void main()
{
	int a,b,c;
	
	for(a=5; a>=1; a--)
	{
		for(c=a; c<=4; c++)
		{
			printf("  ");
		}
		for(b=a; b>=1; b--)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
	
}