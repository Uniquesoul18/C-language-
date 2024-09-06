#include<stdio.h>
//WAP to  make a simple calculator using switch case//
void main()
{
	int a,b;
	char choice;
	
	printf("Enter what you want to perform :");
	scanf("%c",&choice);
	
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :\n");
	scanf("%d",&b);
	
	switch(choice)
	{
		case'+':printf("sum of %d and %d is %d",a,b,a+b);
		break;
		case'-':printf("substraction of %d and %d is %d",a,b,a-b);
		break;
		case'*':printf("multiplication of %d and %d is %d",a,b,a*b);
		break;
		case'/':printf("division of %d and %d is %d",a,b,a/b);
		break;
		case'%':printf("module of %d and %d is %d",a,b,a%b);
		break;
	}
	printf("\n");
}