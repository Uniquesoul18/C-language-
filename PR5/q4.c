#include <stdio.h>
#include<conio.h>

int main() {
    int n1,n2,i,j,rowSum = 0,colSum = 0;
    int rowIndex, colIndex;

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
            printf("array[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
         printf("\n");
    }
    
     for (i=0;i<n1;i++) 
	{
        for (j=0;j<n2;j++) 
		{
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // Input the row and column to find the sum
    printf("Enter the row index to find the sum: ");
    scanf("%d", &rowIndex);
    printf("Enter the column index to find the sum: ");
    scanf("%d", &colIndex);

    // Calculate sum of the specified row
    for (j=0; j <n2; j++) 
	{
        rowSum +=a[rowIndex][j];
    }

    // Calculate sum of the specified column
    for (i=0;i<n1;i++) 
	{
        colSum +=a[i][colIndex];
    }

    // Output the sums
    printf("Sum of elements in row %d: %d\n", rowIndex, rowSum);
    printf("Sum of elements in column %d: %d\n", colIndex, colSum);

    return 0;
}

