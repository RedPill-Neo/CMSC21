//item 1

#include <stdio.h>

int main(void){
	//declares two variables for two digits
	int i, j;

	/*asks for input from the user a two digit user
	and assign each one to variables i and j
	using format specifier*/
	printf("Enter a two digit number: ");
	scanf("%1d%1d", &i, &j);

	//displays informative output in the terminal1.c
	printf("Reveresed number: %d%d\n", j, i);

	return 0;
}