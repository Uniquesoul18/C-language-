#include<stdio.h>
//WAP to input any charecter and check wheter its alphabate,digit or special charecter//

int main()
{
	
	char choice;
	printf("Enter your choice :");
	scanf("%c",&choice);
	
	if(choice<='a'<='z')
	{
		printf("It is a alphabate");
	}
	
	
	
	return 0;
}