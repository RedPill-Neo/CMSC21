// Page 38 - Chapter 3 - Example 1

#include <stdio.h> // for printf 

int main(void){
	// declares variables i and j as integers
	int i, j; 
	// declares variables x and y as floating point numbers 
	float x, y; 

	// assigns value to the variables with corresponding data types
	i = 10; 
	j = 20;
	x = 43.2892f;
	y = 5527.0f;

	/* prints an informative output four specifiers, that are to be 
	replaced by the values of i, j, x, and y, respectively. */

	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

	return 0; 

}