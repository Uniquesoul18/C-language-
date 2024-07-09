#include<stdio.h>
#include<conio.h>

void main ()
{
	int a,b;
	printf("Enter a and b :");
	scanf("%d%d",&a,&b);
	
	if(a<b)
	{
		printf("a is minimum");
	}
	
	else
	{
		printf("b is minimum");	
	}
}