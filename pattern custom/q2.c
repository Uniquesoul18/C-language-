#include<stdio.h>
#include<conio.h>

void main()

{
	int a,b,c;
	
	for(a=1; a<=5; a++)
	{
		for(c=4; c>=a; c--)
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