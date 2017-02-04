
#include <stdio.h>
#include <stdlib.h>

float greastest(float,float,float);

int main()
{
	// 0. Declare the variable
    float num1,num2,num3;
    float greastest_num ;

    // 1. Ask the user for an inputs
    printf("Enter an first number: ");  
    scanf("%f", &num1);  

    printf("Enter an second number: ");  
    scanf("%f", &num2);  

    printf("Enter an third number: ");  
    scanf("%f", &num3);  

    // 2. Pass the user input to the function
    greastest_num = greastest(num1,num2,num3);

    // 3. Print the greatest number
    printf("The greatest number : %f\n",greastest_num);

    return 0;
}


// Declare the function here
float greastest(float num1,float num2,float num3)
{

	// 1. Compoar the first number to other two
	if( (num1>num2) && (num1>num3) )
	{
		// 1.5 Return the first number since it is greatest
		return num1;
	}
	// 2. Compare num2 to two other numbers
	else if( (num2>num1) && (num2>num3) )
	{
		// 2.5 Return the second number since it is greatest
		return num2;
	}
	// 3. Compare num3 to two other numbers
	else if( (num3>num1) && (num3>num2)  )
	{
		// 3.5 Return the third number since it is greatest
		return num3;
	}

	// 4. Since all of the numbers are the same exit the program
	printf("You have inputed the same number! Thats a no no exiting the program\n");
	exit(0);
}









// ----- END OF THE CODE --------