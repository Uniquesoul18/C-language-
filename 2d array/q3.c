#include<stdio.h>

int main() 
{
    
	int n1,n2,i,j,sum = 0;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &n1);
    printf("Enter number of columns: ");
    scanf("%d", &n2);


    int a[n1][n2];

    // Input elements of the 2D array
    printf("Enter elements of the array:\n");
    for (i=0;i<n1;i++) 
	{
        for (j=0;j<n2;j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    
    for (i=0;i<n1;i++) 
	{
        for (j=0;j<n2;j++) 
		{
            printf("%d 1",a[i][j]);
        }
        printf("\n");
    }

    for (i=0;i<n1;i++) 
	{
        for (j=0;j<n2;j++) 
		{
            if(a[i]==a[j] && i==j)
            {
            	sum=sum+a[i][j];
			}
        }
    }   

    // Output the sum of diagonal elements
    printf("Sum of diagonal elements: %d\n", sum);
    
    return 0;
}
