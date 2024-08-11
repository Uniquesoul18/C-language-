#include<stdio.h>
#include<conio.h>

void main()
{
	int i, j;
    char ch;
    
    for (i = 1; i <= 5; ++i)
	 {
        for (j = 1; j <= i; ++j) 
		{
            ch = 'A' + j - 1; 
            printf("%c ", ch);
        }
        printf("\n"); 
    }	            
}