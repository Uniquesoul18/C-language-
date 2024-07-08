#include<stdio.h>
#include<conio.h>

 void main()

{
 
  int  Maths,English,Science;
  float Average,per;
    printf("Enter Maths marks:");
    scanf("%d",&Maths);
    printf("Enter English marks:");
    scanf("%d",&English);
    printf("Enter Science marks:");
    scanf("%d",&Science);
   
   
   Average =Maths+English+Science;
   per=Average*100/300;
   printf("%f",per );
   
}