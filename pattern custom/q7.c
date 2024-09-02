#include<stdio.h>


void main()
{
	int a,b,c;
	
	
	for(a=1; a<=5; a++)
	{
		for(b=2; b<=a; b++)
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