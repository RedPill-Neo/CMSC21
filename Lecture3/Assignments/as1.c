/*Item 1, Lecture 3 Assignments*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(){
	// declare variables
	int age;
	bool teenager;

	printf("Enter age:\n");
	scanf("%d", &age);

	// test whether age is of a teen or not
	teenager = ( (age >= 13) && (age <= 19) );

	// if variable 'teenager' is true, then execute body of 'if'
	if(teenager){
		printf("Your'e a teenager.\n");
	}
	// otherwise, execute this
	else{
		printf("Your'e NOT a teenager.\n");
	}

	system("PAUSE");
	return 0;
}