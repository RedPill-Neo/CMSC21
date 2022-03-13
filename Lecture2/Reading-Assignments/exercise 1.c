//Exercise 1

#include <stdio.h>

int main(void){

	//a) "12"
	i = 5; j = 3;

	printf("%d%d", i / j , i % j);

	//b) "0"
	i = 2; j = 3;
	
	printf("%d", (i + 10) % j);

	//c) "19"
	i = 7; j = 8; k = 9;

	printf("%d" (i + 10) % k/j);

	//d) ""
	i = 1; j =2; k = 3;
	
	printf("%d", (i + 5) % (j + 2)/k);

	return 0;

}