#include<stdio.h>


void main()
{
	int a,b,c;
	
	
	for(a=1; a<=5; a++)
	{
		for(c=2; c<=a; c++)
		{
			printf("  ");
		}
		for(b=5; b>=a; b--)
		{
			printf("%d ",b);
		}
		printf("\n");
	}
}