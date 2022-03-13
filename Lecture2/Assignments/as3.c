//item 3

#include <stdio.h>

int main(void){
	int i, j, k;

	/*a) "1"; with OR operator, preincrement, and relationals */
	i = 3; j = 4; k = 5;
	printf("a)%d\n", i < j || ++j < k);

	/*b) "0"; using AND operator, postincrement, a relational,
	and an arithmetic operator "-" */
	i = 7; j = 8; k = 9;
	printf("b)%d\n",i - 7 && j++ < k); 

	/*c) "1"; using OR operator, assignment, and an equality 
	operator "==" */
	i = 7; j = 8; k = 9;
	printf("c)%d\n", (i = j) || (j == k));

	/*d) "1" and "2 1 1"; using preincrement operator and logical
	operators NOT and AND */
	i = j = k = 1;
	printf("d)%d\n", ++i || ++j && ++k);
	printf("  %d %d %d\n", i, j, k);

	return 0;

}