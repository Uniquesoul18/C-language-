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
	
	printf("(x+y+z)3=%d",  (x*x*x) - (y*y*y) - ((3*x*y)*(x+y)));
}