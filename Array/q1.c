#include<stdio.h>

void main()
{
	int i,n;
	
		printf("Enter n :");
		scanf("%d",&n);
	int a[n];
	

	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	
	printf("Lenth of array %d",n);

}