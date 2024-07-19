#include<stdio.h>
#include<conio.h>

void main()
{
	int n,a=1;
	printf("Enter n:");
	scanf("%d",&n);
	
	while(a<=n)
	{
		if(n%2==1)
		{
	 		printf("%d ",n);
		
		}
		n--;	
		
	}
}