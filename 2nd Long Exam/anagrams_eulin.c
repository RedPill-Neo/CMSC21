/*Test III no. 1*/
#include <stdio.h> /*for input and output function*/
#include <stdlib.h> /*for system pausing*/
#include <ctype.h> /*for toupper and isalpha*/
#include <stdbool.h> /*for boolean values*/

void scan_word(int occurrences[26]); /*declaring required functions*/
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int i; /*global variable i, since it is used many times as the index and for iteration*/

int main(void){ 
	int occurrences1[26] = {0}, /*defining the array for the first word as null set*/
	occurrences2[26] = {0}; /*array to keep track of the second word as null set*/

	printf("Enter the first word: ");
	scan_word(occurrences1); /*call scan_word to scan how many times a letter has occured in a word*/

	printf("Enter the second word: ");
	scan_word(occurrences2); //to scan the second word

	/*if the is_anagram function returns a boolean true, then execute the following*/
	if(is_anagram(occurrences1, occurrences2)){ 
		/*Inform the user that the words are anagrams (has the same array)*/
		printf("\n\tThe words are anagrams!\n"); 
		system("PAUSE"); //end main; exit program
		return 0;
	}
	else{
		printf("\n\tThe words are not anagrams.\n");
		/* if the function is_anagram return a false boolean value, 
		then inform the user it's not an anagram*/
		system("PAUSE"); 
		return 0;
	}
}

/*DEFINING FUNCTIONS*/

void scan_word(int occurrences[26]){ 
	char c;
	/* scans only a letter in the alphabet, turns it to upper case and adds into the array 
	of numbers (occurences1 or 2) that a letter (an element) if present be added to the number
	it is placed, i.e, 2 a's, 3 b's, and no c's is equal to {2, 3, 0...},*/
	while ((c = getchar()) != '\n'){ 
		if(isalpha(c)){
			occurrences[toupper(c) - 'A']++;
		}
	}
}


bool is_anagram(int occurrences1[26], int occurrences2[26]){
	/*for every element in the array designated for each word, if there is any mismatch
	then the words will be declared as not an anagram*/
	for(i = 0; i < 26; i++){ 
		if(occurrences1[i] != occurrences2[i]){
			return false;
		}
	}
	return true;
}