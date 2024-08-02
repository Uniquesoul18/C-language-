#include<stdio.h>
#include<conio.h>

void main()
{
	int n,count=0;
	//count for starting the digit counting
	//n is a number entered by user
	printf("Enter n :");
	scanf("%d",&n);
	
	//by using while loop
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	
	printf("Number of Digits:%d",count);
}