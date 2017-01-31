#include <stdio.h>
#include <stdlib.h> // For exit() function
int main()
{

	// 1. Declare the variables and since we already know the number of numbers is 20
	// declare integer array with length 20
    char read_the_number;
    FILE *fptr;
    int converted_int_from_string ;
    int number_array[20]; 
    int i = 0;

    // 2. Open the numbers dat file
    if ((fptr = fopen("numbers.dat", "r")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }


    // 3. Read the text file until we hit the end of file
    while (fscanf(fptr, "%s", &read_the_number) != EOF) {

    	// 4. Some number will because of floating point error but it is negligible 
    	// learn more at: http://docs.oracle.com/cd/E19957-01/806-3568/ncg_goldberg.html
    	converted_int_from_string = atoi(&read_the_number); 

    	// 5. Print and insert the integer in the array
    	printf("Putting the intger : %d, in the array %d'th element. \n",converted_int_from_string,i);
    	number_array[i] = converted_int_from_string;
    	i++;
	}
	printf("\n----------------------------\n");

	// 6. First find the first minimun number in the array
    int minimum = number_array[0],c;
    for ( c = 0 ; c < 20 ; c++ ) 
    {
        if ( number_array[c] < minimum ) 
        {
           minimum = number_array[c];
        }
    } 
 	printf("First minimum number : %d\n",minimum);

	// 7. Second find the Second minimun number in the array
    int minimum2 = number_array[0];
    for ( c = 0 ; c < 20 ; c++ ) 
    {
    	// 8. Added the part if the number that we are comparing to is not the first minimum number.
        if (number_array[c] < minimum2 && (number_array[c] != minimum))
        {
           minimum2 = number_array[c];
        }
    } 
 	printf("Second minimum number : %d\n",minimum2);

    
    return 0;
}



// ---- END OF CODE -----