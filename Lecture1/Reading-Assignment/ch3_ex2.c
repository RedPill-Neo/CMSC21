// Page 40 - Chapter 3 - Example 2

#include <stdio.h> // for printf

int main(void){
	// declares variable i as integer
	int i;
	// declares variable x as floating point number
	float x;

	// assigns value to i and x
	i = 40;
	x = 839.21f;

	/*prints output in the terminal with varying specifiers,
	that are to be replaced by the value of variables i and x*/

	printf(" |%d|%5d|%-5d|%5.3d|\n", i, i, i, i); 
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	/* Basically, the program is to show the amount of space 
	occupied (by number of printed characters) by the values
	printed depending on their conversion specifications.*/

	return 0;
}
