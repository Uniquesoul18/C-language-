#include<stdio.h>
#include<conio.h>

void main()
{
	int n,count=0;
	int i;

	
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=1;n!=0;count++)
	{
		n=n/10;		
	}
	printf("num of digits :%d",count);
	
}
