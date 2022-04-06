/*as3.c*/
#include <stdio.h> // for printf and scanf
#include <stdlib.h> // for system pausing

int main(void){ 
	int i;

	for (i = 1; i <= 128; ){
		printf("%d ", i);
		i *= 2;
	}

	system("PAUSE");
	return 0;
}
