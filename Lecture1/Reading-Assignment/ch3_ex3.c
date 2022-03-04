// Page 46-47 - Chapter 3 - Example 3

/***ADDITION OF FRACTIONS***/

#include <stdio.h> // for printf and scanf

int main(void){
	//declares the following variables as integers
	int num1, denom1, num2, denom2, result_num, result_denom;

	/*USER INPUT AND ASSIGNING OF VALUE*/

	// asks the user for an input
	printf("Enter first fraction:");

	// assigns input as the corresponding variables' value
	// specifies values as decimal
	scanf("%d/%d", &num1, &denom1);

	// asks the user for an input
	printf("Enter second fraction:");

	// assigns input as the corresponding variables' value
	// specifies values as decimal
	scanf("%d/%d", &num2, &denom2);

	/*ADDITION OF TWO FRACTIONS OPERATIONS*/
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	//prints the result of the operation as a sum of the two fractions, informatively
	printf("The sum is %d/%d\n", result_num, result_denom);

	/* The program lets the user input two separate fractions and perform mathematical
	operations to find their sum. How the sum will be found is by mutiplying the 
	two denominators (assigning the resulting value as the final denominator) and adding 
	the product of the first numerator and the second denominator to the product of the
	second numerator and first denominator, the resulting value of which is the final
	numerator.
	
	The output then'll be displayed in the terminal properly (in a fraction form,
	although not in simplified form) using the specifiers acting as placeholder
	*/
	
	return 0;

}