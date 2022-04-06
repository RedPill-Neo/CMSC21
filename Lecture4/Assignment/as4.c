/*as4.c*/
#include <stdio.h> // for printf and scanf
#include <stdlib.h> // for system pausing

int main(){
	int power, number, i; // declare variables

	// ask the user for an input
	printf("Enter the number of entries: ");
	scanf("%d", &number); // assign input to variable

	printf("\n         n     2 to the n\n");
	// display in terminal
	printf("        ---   -----------\n");

	// for loop, using determined range from user
	for (i = 0; i <= number; i++){
	if (i == 0){
		power = 1;
	}
	else{
		power *= 2;
	}
	// will iterate until the last number is powered to 2
	printf("\n");
	printf("%10d %10d ", i, power); 
	}
	// display in table form

	printf("\n");
	system("PAUSE");
	return 0;
}