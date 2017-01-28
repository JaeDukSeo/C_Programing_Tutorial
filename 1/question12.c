#include <stdio.h>

int main(void)
{

    int number,number2,number3;

    // 1. Input the three numbers
    printf("Enter the first integer: \n");  
    scanf("%d", &number);  
    
    printf("Enter the second integer: \n");  
    scanf("%d", &number2);  

    printf("Enter the third integer: \n");  
    scanf("%d", &number3);  

    // 2. Compare the first number to other numbers
    if ( (number > number2) && (number>number3) )
    {
    	printf("The largest number is first number %d\n",number);
    }

    // 3. Compare the second number to other numbers
    else if ( (number2>number) && (number2>number3) )
    {
    	printf("The largest number is second number %d\n",number2);
    }
    
    // 4. Compare the third number to other numbers
    else if ( (number3>number) && (number3 > number2) )
    {
    	printf("The largest number is third number %d\n",number3);
    }

    // 5. Else all of the numbers are exact same
    else{
    	printf("All of the three numbers were same numer. \n");
    }
   
    return 0;

}