#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	for(a=1; a<=5; a++)
	{	
		for(c=2; c<=a; c++)
		{
			printf("  ");
		}
		
		for(b=a; b<=5; b++)
		{
			if(b%2==0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		
		printf("\n");
	}
	
}