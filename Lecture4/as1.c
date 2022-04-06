/*as1*/
#include <stdio.h> // for printf and scanf
#include <stdlib.h> // for system pausing

int main(void){
	int i;

	i = 1;
	while (i <= 128){
		printf("%d ", i);
		i *= 2;
	}

	system("PAUSE");
	return 0;
}