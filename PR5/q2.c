#include <stdio.h>

void main() 
{
    int n1,n2,i,j,max;

    // Input array size
    printf("Enter the array's row size: ");
    scanf("%d", &n1);
    
    printf("Enter the array's column size: ");
    scanf("%d", &n2);

    int a[n1][n2];

    // Input array elements
    printf("Enter array elements:\n");
    for (i=0;i<n1;i++) 
	{
		for(j=0;j<n2;j++)
		{
          printf("a[%d][%d]= ", i,j);
          scanf("%d", &a[i][j]);
        }
    }

    // Initialize max with the first element of the array
    max = a[0][0];

    // Find the maximum element
    for (i=1;i<n1;i++) 
	{
		for(j=1;j<n2;j++)
	   {
		
         if (a[i][j]>max) 
		 {
            max = a[i][j];
         }
       }
    }

    // Output the maximum element
    printf("The largest element is: %d\n", max);

}

