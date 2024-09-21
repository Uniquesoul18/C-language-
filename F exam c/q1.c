#include<stdio.h>
//write a program in c ton swap two numbers using user defined function//
int swap()
{
	int a,b;
	
	printf("Enter a :");
	scanf("%d",&a);
	
	printf("Enter b :");
	scanf("%d",&b);
	
	//swapping theb numbers in beetwin//
	a=a+b;
	b=a-b;
	a=a-b;

	//swapping numbers//
	printf("a is %d",a);
	printf("b is %d",b);

	return 0;
}


int main()
{
	swap();
}