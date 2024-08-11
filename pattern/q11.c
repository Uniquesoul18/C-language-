#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j;
    
    for (i = 0; i <= 5; ++i)
	 {
        for (j = 0; j < 5-i; ++j) 
		{
			if ((i + j) % 2 == 0) 
			{
                printf("1 ");
            } 
			else
			{
                printf("0 ");
            }
            
            
        }
        printf("\n"); 
    }	            
}