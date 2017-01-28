#include <stdio.h>

// 0. Need to declare this inorder to use function odd
int odd(int n);

int main()
{
  
    // 1. Declare the variables 
	int count = 0; // This is to count the outputed variables
	int current_number = 0;
	int past_number = 0, past_past_number = 0,fib_result = 0;

	// 2. Forever loop until the count limit have been met
	while(1)
	{

		// 3. if the current number is 1 then print out one and update count
		if(current_number == 1)
		{
			count ++;
			printf("%d is the %d'th found fib number!\n",current_number,count);
		}
		else
		{
			if(current_number != 0 )
			{
				// Get the past two numbers to sum up it up and get the fib number
				past_number = current_number -1;
				past_past_number = current_number - 2; 
				fib_result = past_number + past_past_number;

				if(odd(fib_result) == 1)
				{
					count ++;
					printf("%d is the %d'th found fib number!\n",fib_result,count);
				}

			}
		}

		// Increament the current number
		current_number ++;

		// Terminate if the count is met and update the count
		if(count == 20)
		{
			break;
		}
	};

	return 0;
}


// Check if the given number is prime
int odd(int n)
{
	if(n%2==0) return 0;
    return 1;
}



// ---- END OF THE CODE ----