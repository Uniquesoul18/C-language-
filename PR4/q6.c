#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k,m;
	
	for (i = 1 ; i <= 5; ++i)
	{
	 	for(j = 1 ; j <=i; ++j)
        {
        	printf("%d ",j);	
		}
		for(k = i ; k <=4; ++k)
        {
        	printf("    ");	
		}
		for(m = i ; m >=1;m--)
        {
        	printf("%d ",m);	
		}
		printf("\n");
	}
	return 0;
		            
}