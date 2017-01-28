
#include <stdio.h>
#include <stdlib.h> // For exit() function
#include <math.h>

int recomm(int average);

int main()
{
    char read_the_number;
    FILE *fptr;
    float converted_float_from_string = 0,sum = 0;
    int count = 0;

    // 2. Open the Sample txt file
    if ((fptr = fopen("soil.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }

    // 3. Read the text file until we hit the end of file
    while (fscanf(fptr, "%s", &read_the_number) != EOF) {

    	// 4. Some number will because of floating point error but it is negligible 
    	// learn more at: http://docs.oracle.com/cd/E19957-01/806-3568/ncg_goldberg.html
    	converted_float_from_string = strtod(&read_the_number, NULL); 

    	// 5. Update the sum and the count
    	sum = sum + converted_float_from_string;
    	count++;
	}
  
	// 6. Declare a variable to hold the average 
	double average = sum/count;

  	if (recomm(average) == 1)
  	{
  		printf("Yes build it, the average is %f\n",average );
  	}
  	else
  	{
  		printf("No do not build it, the average is %f\n",average);
  	}


  	// Finally, close the file 
    fclose(fptr);
    return 0;
}

// Define out function that takes in the average value and give out either 1 or 0
int recomm(int average)
{
	int square_root  = sqrt(average);

	if (square_root > 2.5) return 1;
	return 0;
}



// -- END OF THE CODE ------








// --- END OF THE CODE -----