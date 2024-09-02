#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	
	for(a=5; a>=1; a--)
	{
		for(b=2; b<=a; b++)
		{
			printf("  ");
		}
		for(b=5; b>=a; b--)
		{
			printf("%d ",a);
		}
		printf("\n");
	}
}