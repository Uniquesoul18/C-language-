#include<stdio.h>
#include<conio.h>

void main()
{
	int choice;
	
	printf("Press 1 for English\n");
	printf("Press 2 for Hindi\n");
	printf("Press 3 for Gujrati\n\n");
	
	printf("Enter your choice :");
	scanf ("%d",&choice);
	
	
   switch (choice)
   
   
   {
     case 1:
	printf("Press 1 for Internet recharge\n");
	printf("Press 2 for Top-up recharge\n");
	printf("Press 3 for Special recharge\n\n");
	
		printf("Enter your choice :");
	scanf ("%d",&choice);
	 
	 	
	switch(choice)
	{
		case 1:
		printf("You have successfully done a Internet recharge\n");
		break;
		case 2:	printf("You have successfully done a Top-up recharge\n");
		break;
		case 3: printf("You have successfully done a Special recharge\n ");
		break;
		
	
	}
	break;

	
	case 2:
	printf("Internet Recharge ke liye 1 dabaiye\n");
    printf("Top-up Recharge ke liye 2 dabaiyn\n");
    printf("Special Recharge ke liye 3 dabaiy\n");
	
	printf("Enter your choice :");
	scanf ("%d",&choice);
	
	switch (choice)
	{
	
		case 1:
		printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
		break;                                                    
		case 2:	
		printf("Aapne safaltapurvak Top-up recharge kar liya he.\n");
		break;
		case 3:
		 printf("Aapne safaltapurvak Special Recharge kar liya he. \n");
		break;
		
	
    }
    break;
	
	case 3:
    printf("Internet Recharge mate 1 dabavo\n");
    printf("Top-up Recharge mate 2 dabavo \n");
    printf("Special Recharge mate 3 dabavo\n");
	
	printf("Enter your choice :");
	scanf ("%d",&choice);
	

	
	switch (choice)
	{
    
	
		case 1:printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
		break;
		case 2:
		printf("Tame safaltapurvak Top-up Recharge karyu chhe.\n");
		break;
		case 3: 
		printf(" Tame safaltapurvak Speciual Recharge karyu chhe.\n");
		break;                                                   
		
	
    }
    break;
	

     default:printf(" invalid input");	
}
  
}
	
	
	
