/* Total elements ann array can hold */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int number[16];

	size_t n = sizeof(number)/sizeof(number[0]);
	printf("Total elements the array can hold is: %d\n", n);

	system("PAUSE");

	return 0;
}