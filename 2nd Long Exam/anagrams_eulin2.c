/*Test III no. 2*/
#include <stdio.h> /*for input and output function*/
#include <stdlib.h> /*for system pausing*/
#include <ctype.h> /*for toupper and isalpha*/
#include <stdbool.h> /*for boolean values*/

void scan_word(int occurrences[26]); /*declaring required functions*/
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int i,
*ptr1, *ptr2; //declaring a pointer global variable

int main(void){ 
	int occurrences1[26] = {0},
	occurrences2[26] = {0};

	printf("Enter the first word: ");
	scan_word(occurrences1); //scan if a letter occured, turn into a number array (occurrences)

	printf("Enter the second word: ");
	scan_word(occurrences2); 

	if(is_anagram(occurrences1, occurrences2)){
		printf("\n\tThe words are anagrams!\n");
		system("PAUSE");
		return 0;
	}
	else{
		printf("\n\tThe words are not anagrams.\n");
		system("PAUSE");
		return 0;
	}
}

/*defining functions*/
void scan_word(int occurrences[26]){
	char c; 
	/*turns each occurrences of a letter in each word into a number array*/
	while ((c = getchar()) != '\n'){
		if(isalpha(c)){
			occurrences[toupper(c) - 'A']++;
		}
	}
}


bool is_anagram(int occurrences1[26], int occurrences2[26]){
	ptr1 = occurrences1;
	ptr2 = occurrences2;

	for(i = 0; i < 26; i++){
		// using pointer notation, the ptr variables will navigate the array and retrieve elements for comparison
		if(*(ptr1+i) != *(ptr2+i)){
			return false;
		}
	}
	return true;
}