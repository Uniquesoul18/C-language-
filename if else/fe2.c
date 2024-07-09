#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c,d;
	printf("Enter a,b,c,d :");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	
	if(a>b)
	{
		//a,c
		if(a>c)
	    {
	    	//a,d
	    	if(a>d)
	    	{
	    		printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			printf("c is maximum");
		}
	}
	else
	{
			//b,c
			if(b>c)
			{
				//b,d
				if (b>d)
				{
					printf("b is maximum");
				}
				else
				{
					printf("d is maximum ");
				}
				
			}
			else
			{
				//c,d
				if(c>d)
				{
					printf("c is maximum ");
				}
				else
				{
				 	printf("d is maximum");	
				}
			}
	
	}

}
