#include<stdio.h>
#include<conio.h>

	int sum(int p,int q)
	{
		return p+q;
	}
	int sub(int p,int q)
	{
		return p-q;
		
	}
	int multiply(int p,int q)
	{
		return p*q;		
	}
	int divide(int p,int q)
	{
		return p/q;	
	}
	int module(int p,int q)
	{
		return p%q;
	}
	
	void main()
	{
		int	choice,num1,num2,result,i=1,j,n;
	
		while(i=1)
		{	
			printf("\n\nPress 1 for +\n");
			printf("Press 2 for -\n");
			printf("Press 3 for *\n");
			printf("Press 4 for /\n");
			printf("Press 5 for %\n");
			printf("Press 6 for exit\n");

			printf("Enter your choice : ");
			scanf("%d",&choice);
	
	        if(choice==6)
			{
				break;	
			}	
			printf("Enter first number :");
			scanf("%d",&num1);
			printf("Enter second number :");
			scanf("%d",&num2);
	
			switch(choice)
			{
			case 1: 
			result= sum(num1,num2);
			printf("addition %d and %d is %d",num1,num2,result);
			break;
			case 2: printf("substraction is %d",num1-num2,result);
			break;
			case 3: printf("multiplication is %d",num1*num2,result);
			break;
			case 4: printf("division is %d",num1/num2,result);
			break;
			case 5: printf("module is %d",num1%num2,result);
			break;
			
			default:
			printf("exit");

    }		
}
	printf("code closed");		
}