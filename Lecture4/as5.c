/*Display a Month in Calendar Form*/

#include <stdio.h> // for printf and scanf
#include <stdlib.h> // for system pausing

int main(){
	int i, days, first; //declare variables

	printf("This program prints a month in calendar form.\n");
	printf("Enter number of days in month: "); //ask for number of days
	scanf("%d", &days); // assign input to variable 'days'

	// ask for another input
	printf("Enter the starting day of the week (1=Sun, 7=Sat): "); 
	scanf("%d", &first); // assign input to variable 'first'

	// place the first day to the right day of the week using triple space
	for(i = 1; i < first; i++){
		printf("   ");
	}

	// iterate to print days in 7 rows until the input value from user
	for(i = 1; i <= days; ++i){
		printf("%3d", i);
		if( (first + i - 1) % 7 == 0){
			printf("\n");
		}
	}

	printf("\n");
	system("PAUSE");
	return 0;
}