#include <stdio.h>

//WAP to input any charecter and check wheter its alphabate,digit or special charecter//

int main()
{
    char choice;

    /* Input character from user */
    printf("Enter any character: ");
    scanf("%c", &choice);


    /* Alphabet check */
    if((choice >= 'a' && choice <= 'z') || (choice >= 'A' && choice <= 'Z'))
    {
        printf("'%c' is alphabet.", choice);
    }
    else if(choice >= '0' && choice <= '9')
    {
        printf("'%c' is digit.", choice);
    }
    else 
    {
        printf("'%c' is special character.", choice);
    }

    return 0;
}
