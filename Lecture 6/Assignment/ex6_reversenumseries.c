/* Reverses a series of numbers */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void){
	int a[N], i;

	printf("Enter %d numbers: \n", N);

	for(i = 0; i < N; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printf("In reverse order: ");

	for(i = N - 1; i >= 0; i--){
		printf(" %d", a[i]);
	}

	printf("\n");

	system("PAUSE");

	return 0;
}

/*How it reversed the series\
	1. It is already defined that the amount of elements in the array will be ten, so for 10 times
	the program will ask the user to enter a number
	2. the index inside the array will  determine on what order the input will be stored. increment the index,
	and thus the input will also be stored in the array in increasing order. 
	3. To reverse, start from 9 as teh index, then count down by decrementing throught a for loop.
	That way, the first element to be printed is the element inside the array with the largest index, which is 9.
	Decrementing will count all the way to zero, thus the element inside them will be printed, in reverse. 

	*/