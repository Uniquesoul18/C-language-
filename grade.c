#include<stdio.h>
#include<conio.h>

void main()
{
	float score;
	char Grade;
	
	printf("Enter your score :");
	scanf("%f",&score);
	

		
	
	 (score>=80&&score<=100)
	
	?	printf("Grade=A\n",Grade='A')	
	
	:
	
		(score>=70&&score<80)
		
		?	printf("Grade=B\n",Grade='B')
		
		
		:
		
			(score>=50&&score<70)
			
			?	printf("Grade=C\n",Grade='C')
			
			:
		
				 (score>=33&&score<50)
				
				?	printf("Grade=D\n",Grade='D')
				
			    :
				
				(score>=0&&score<33)
					
					?	printf("Grade=F\n",Grade='F')
					
					:
					
						printf("Enter valid score\n");
					
				
	switch(Grade)
	{
		case'A':
			printf("Exellent Work!\n");
		break;
		case'B':
			printf("Well Done!\n");
		break;
		case'C':
			printf("Good job\n");
		break;
		case'D':
			printf("You passed,but you can do better\n");
		break;
		case'F':
			printf("Sorry, you failed\n");
		break;
	}
	
 	if(Grade=='A'||Grade=='B'||Grade=='C'||Grade=='D')
	 {
	 	printf("Congratulations!You are eligible for next level!");
	 }	
	 else
	 {
	 	printf("Please Try next time");
	 }		
			
	

	
}