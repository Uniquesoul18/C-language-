#include<stdio.h>
//write a c program to convert degree celcius to fahrenhite//
int main()
{
	float cel,fahrenhite;
	
	//f=c*1.8+32
	printf("Enter celcius :");
	scanf("%f",&cel);
	
	fahrenhite=cel*1.8+32;
	
	printf("Fahrenhite=%.2f",fahrenhite);	
	return 0;
	
}