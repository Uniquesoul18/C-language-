#include<stdio.h>
#include<conio.h>
 
void main ()
{
	int x,y,z;
	
	printf("Enter x :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);
	printf("Enter z:");
	scanf("%d",&z);
	
	printf("(x+y+z)2=%d", (x*x) + (y*y) + (z*z) + (2*(x*y)+(y*z)+(z*x)));
}