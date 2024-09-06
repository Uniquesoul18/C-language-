#include<stdio.h>
//WAP to print the perimeter of a rectangle to take its height and width as input//
//formula 2(h+w)//
int main()
{
	int h,w,Perimeter;
	
	printf("Enter the Height if the Rectangle :");
	scanf("%d",&h);
	printf("Enter the Width if the Rectangle :");
	scanf("%d",&w);
	
	Perimeter=(h+w)*2;
	printf("perimeter of Rectangle is %d ",Perimeter);
	return 0;
}