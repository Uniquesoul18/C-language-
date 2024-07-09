#include<stdio.h>
#include<conio.h>

void main()
{
	int X,Y,Z;
	printf("Enter Number :");
	scanf("%d%d%d",&X,&Y,&Z);
	
	
	(X<Y)?(X<Z)?printf("X is minimum"):printf("Z is minimum"): (Y<Z)?printf("Y is minimum"):printf("Z is minimum")  ;
	


}