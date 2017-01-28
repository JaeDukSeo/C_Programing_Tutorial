#include <stdio.h>

int main(void)
{

    int year;

    // 1. Input the year 
    printf("Enter the year : \n");  
    scanf("%d", &year);  
    
    // 2. Postive and divisible by integer 4
    if ( (year > 0) && ( year%4 == 0) )
    {

        if ( year%100 == 0 )
        {
            if ( year%400 == 0 )
            {
                printf(" A leap year \n");
            }
            else
            {
                printf(" Not a leap year \n");
            }
        }
        else
        {
            printf(" A leap year \n");
        }
    }
    else
    {
        printf("Not a leap year \n");
    }
  
   
    return 0;

}