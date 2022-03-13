//item 2

#include <stdio.h>

int main(void){
	//declares three variables for two digits
	int i, j, k;

	/*asks for input from the user a three digit user
	and assign each one to variables i, j, and k
	using format specifier*/
	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &i, &j, &k);

	//displays informative output in the terminal1.c
	printf("Reveresed number: %d%d%d\n", k, j, i);

	return 0;
}