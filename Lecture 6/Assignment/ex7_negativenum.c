/* Finds the negative numbers in an array */

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int N, i;

	printf("ENter N: ");
	scanf("%d", &N);

	int a[N];

	for(i = 0; i < N; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	printf("Negative numbers: \n");

	for(i = 0; i < N; i++){
		if (a[i] < 0){
			printf("a[%d] = %d is a negative number. \n", i, a[i]);
		}
	}

	system("PAUSE");

	return 0;
}

/*How the program works - psuedocode:
	1. Ask for how many elements the array should store
	2. loop through that array, and for each index, store an element
	3. To find the negative numbers in the array, loop throught it again.
	Use selection statements, such as if, and if an index has an element less than 0,
	then print it as the negative number. 
	*/