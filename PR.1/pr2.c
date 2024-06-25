#include<stdio.h>
#include<conio.h>

void main()
{
	int salary,Grosssalary,a,b,c;
	 
    printf("Enter salary:");
    scanf("%d",&salary);
     int HRA=10;
     
     int DA=5;
    
     int TA=8;
  
 a=salary*HRA/100;
  b=salary*DA/100;
  c=salary*TA/100;
  Grosssalary=salary+a+b+c;

  printf("Grosssalry:%d",Grosssalary);
    

}
