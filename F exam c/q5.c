#include<stdio.h>
//write below pattern using nested loop//

void main()

{
    char i,j;
    int k;
	//rows
	for(i='A'; i<='E'; i++)
	{
		//for space
		for(k=4; k>1; k--)
		{
			printf("");
		}
		//columns
		for(j=i; j>='A'; j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
	
}