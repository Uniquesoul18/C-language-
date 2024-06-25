#include<stdio.h>
#include<conio.h>

void main()
{
	int firstangle,secondangle,thirdangle;
	
	
	printf("Enter firstangle:");
	scanf ("%d",&firstangle);
	printf("Enter secondangle:");
	scanf ("%d",&secondangle);
	 
	thirdangle =180-(firstangle+secondangle);
	printf("thirdangle:%d",thirdangle);
}