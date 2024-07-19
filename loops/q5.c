#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	int b;
	// a and b are for the year from user..
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	while(a<=b)
	{
		if(a%4==0)
		{
			printf("%d ",a);
		}
		a++;
	}

}