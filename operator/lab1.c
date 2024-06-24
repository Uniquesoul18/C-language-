#include<stdio.h>
#include<conio.h>
 
void main ()
{
	int x,y;
	
	printf("Enter x :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);
	
	printf("(x+y)2=%d", (x*x) + (2*x*y) + (y*y));
}
