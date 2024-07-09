#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	//a,b
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			printf("a is minimum ");
			
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	//b,c
	{
		if(b<c)
		{
			printf("b is minimum");
		}
		else
		{
			printf("c is minimum");
			
		}
	}
}