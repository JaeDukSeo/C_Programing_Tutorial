#include <stdio.h>
#include <stdlib.h>

int midterm(int);

int main()
{
    int number;

    // 1. Ask the user for an input
    printf("Enter an integer number: ");  
    
    // 2. Takes in the integer number
    scanf("%d", &number);  
    
    // 3. pass that integer number to the function midterm
    int N_sum = midterm(number);

    // 4. Let the user know
    printf("File called \"program.txt\" should contain the number: %d", N_sum);

    // 5. Declare variable to write to a file
    FILE *fptr;
    // 6. Open the file
   	fptr = fopen("program.txt", "w");
   	if(fptr == NULL)
   	{
      printf("Error!");
      exit(1);
   	}
   	// 7. Write the number to the file and close
   	fprintf(fptr,"%d", N_sum);
    fclose(fptr);

    return 0;
}


int midterm(int number)
{

	// 0. Declare variable to take in
	int number_in_function = number,a,sum = 0;

	// 1. Loop until we reach the given number
    for( a = 1; a <= number_in_function; a = a + 1 )
    {
    	// 1.5 Check if current number is even 
    	if (a%2==0)
    	{
    		printf("%d is even \n",a);
    	}
    	else
    	{
    		printf("%d is odd \n",a);
    	}

    	// 1.8 Add the incremented number
    	sum = sum + a;
    }

    // 2. Return the number to the function
    return sum;
}


// ----- END OF THE CODE -------