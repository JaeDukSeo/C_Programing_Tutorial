#include <stdio.h>
#include <stdlib.h> // For exit() function
#include <math.h>
int main()
{
	// 1. Declare variables and ask the user for an input.
    int a,num;

    printf("Please input an positive integer value: ");

   	// 2. Take the input from the user and check it if is invalid value or non positive 
   	if (scanf("%d", &num) != 1)
	{
	    printf("You inputed an invalid input! \n");
	}
	if(num<0)
	{
		printf("You inputed an negative input! \n");
		return 1;
	}

	// 3. Now we are going to perform 
	//  n! = n^n * e^(-n) * sqrt( (2*n + 1/3) * PI ) 

	// 4. n^n
	double n_power_of_n = pow((double) num,num);

	// 5. e^(-n)
	double e_power_of_n = pow(M_E,(-1) * num);

	// 6. sqrt( (2*n + 1/3) * PI ) 
	double squre_root = sqrt( (2*(double)num + 1.0/3.0) * M_PI );

	// 7. Result 
	double result = n_power_of_n * e_power_of_n * squre_root;

	// 8. Print the result with three decimal precision
	printf("Calculated with three decimal precision : %.3f", result);

    
    return 0;
}



// --- END OF THE CODE ----