/*as2.c*/
#include <stdio.h> // for printf and scanf
#include <stdlib.h> // for system pausing

int main(){ 
	int i = 10; // initialize i with int value of 10

	printf("Output in While Loo:\n");
	while(i < 10){ // condition
		printf("%d", i); 
		i++; // increment
	}

	i = 10; // initialize again for another case
	printf("\n\nOutput in For Loop:\n");
	for(; i < 10;){
		printf("%d", i);
		i++;
	}

	i = 10; 
	printf("\n\nOutput in Do Loop:\n");
	do{
		printf("%d", i);
		i++;
	} while(i < 10);

	printf("\n");
	system("PAUSE");
	return 0;
}