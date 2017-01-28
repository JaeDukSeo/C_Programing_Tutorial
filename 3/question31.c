
#include <stdio.h>
int main()
{
    // 1. Declare the variables
    double midterm, final, lab, project;

    // 2. Ask for the midterm, final, lab and the project marks
    printf("Enter midterm grades: ");
    scanf("%lf", &midterm);  

    printf("Enter final grades: ");
    scanf("%lf", &final);  

    printf("Enter lab grades: ");
    scanf("%lf", &lab);  

    printf("Enter project grades: ");
    scanf("%lf", &project);  

    // 3. Declare to hold the variables 
    double test_average = (midterm + final) /2;
    double lab_average = (lab + project) /2;

    // 4. Compare the grades to the failing grade.
    if(test_average<50 || lab_average<50)
    {
    	printf("\nYou have failed this course. Grade : F\n");
    }
    else
    {
    	// 5. Calculate the lower grade among the two grades.
		double lower_grade;
		if (test_average > lab_average)   
		{
			lower_grade = 	lab_average;
		} 	
		else
		{
			lower_grade = test_average;
		}

		// 6. Divide into cases to assign grade 
		if (lower_grade<=100 && lower_grade>=80)
		{
	    	printf("\nYou have pass this course. Grade : A, with average %f\n",lower_grade);
		}
		else if(lower_grade<=79.9 && lower_grade>=70)
		{
	    	printf("\nYou have pass this course. Grade : B, with average %f\n",lower_grade);
		}
		else if(lower_grade<=69.9 && lower_grade>=60)
		{
	    	printf("\nYou have pass this course. Grade : C, with average %f\n",lower_grade);
		}
		else
		{
    		printf("\nYou have pass this course. Grade : D, with average %f\n",lower_grade);
		}
    }
    return 0;
}









// ----- END OF THE CODE -----