#include<stdio.h>

int main() 
{
    int n1,n2, i, j;
    float sum = 0.0, average;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &n1);
    printf("Enter number of columns: ");
    scanf("%d", &n2);

    int a[n1][n2];

    // Input elements of the 2D array
    printf("Enter elements of the array:\n");
    for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
		{
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    // Calculate sum of all elements
    for (i = 0;i<n1;i++) 
	{
        for (j = 0;j<n2;j++) 
		{
            sum += a[i][j];
        }
    }

    // Calculate average
    average = sum / (n1*n2);

    // Output the average
    printf("Average of the array: %.2f\n", average);
    return 0;
}
