 #include<stdio.h>
#include<conio.h>
 
void main ()
{
	int x,y;
	
	printf("Enter x :");
	scanf("%d",&x);
	printf("Enter y :");
	scanf("%d",&y);
	
	printf("(x+y)3=%d",  (x*x*x) + ((3*x*y)*(x+y)) + (y*y*y));
}
