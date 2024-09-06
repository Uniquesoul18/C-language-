#include<stdio.h>

//WAP to print a multiplication table of any number using loop//

void main()
{
	int n,i;
	printf("Enter n : ");
	scanf("%d",&n);
	
	for(i=1;i<10;i++)
	{
		printf("%d*%d = %d \n ",n,i,n*i);
		
	}
	
}