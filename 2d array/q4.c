#include<stdio.h>

int main() {
    int i,j,sum = 0;

    int a[5][5];

    // Input elements of the 2D array
    printf("Enter elements of the array:\n");
    for (i=0;i<5;i++) 
	{
        for (j=0;j<5;j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for (i=0;i<5;i++) 
	{
        for (j=0;j<5;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<5;i++) 
	{
       for (j=0;j<5;j++) 
		{
            if(i == 0 || i == 4 || j == 0 || j == 4) 
           {
            	sum=sum+a[i][j];
		   }
        }
    }   

    // Output the sum of diagonal elements
    printf("Sum of diagonal elements: %d\n", sum);
    
    return 0;
}
