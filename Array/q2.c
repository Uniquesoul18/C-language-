#include<stdio.h>

void main()
{
	int i,n;
	float sum=0,avg;
	
		printf("Enter n :");
		scanf("%d",&n);
	
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter a[%d] :",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		avg=sum/n;	
	}

		printf("average of array %.1f \n", avg);
	
	
	

}