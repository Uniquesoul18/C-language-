#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	int lastdigit=n%10;
	printf("last digit:%d\n",lastdigit);
	
	while(n>9)
	{
		n=n/10;
		
	}
	
	printf("First digit :%d\n\n",n);
	printf("sum of first and last digit =%d",lastdigit+n);
	

	
		
}