#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j ,k ;
    
    for (i = 5 ; i >= 1; --i)
	{
	 	for(j = 1 ; j <=i; ++j)
        {
        	printf("%d ",j);	
		}
        printf("\n"); 
    }
	for(i = 2 ; i <= 5; ++i)
	{
		for(j = 1 ; j <=i; ++j)
        {
        	printf("%d ",j);	
		}
		printf("\n"); 
		
	}	            
}