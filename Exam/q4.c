#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	int i;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;n!=0;)
	{
		n=n/10;	
	}
	printf("num of digits :%d",n);
}