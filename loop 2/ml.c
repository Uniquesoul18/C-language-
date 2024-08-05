#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=1,a=1;
	printf("Enter n :");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		a=1;
		a<=n;
        
		sum=i*a;
		printf("%d*%d=%d ",a,i,sum);
		a++;
   
	}
	
}