
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

void scan_word(int occurrences[26]);
bool is_anagram(int occurrences1[26], int occurrences2[26]);

int i,
*ptr1, *ptr2;

int main(void){
	int occurrences1[26] = {0},
	occurrences2[26] = {0};

	printf("Enter the first word: ");
	scan_word(occurrences1);

	printf("Enter the second word: ");
	scan_word(occurrences2);

	int word = is_anagram(occurrences1, occurrences2);

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

void scan_word(int occurrences[26]){
	char c;
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
		if(*(ptr1+i) != *(ptr2+i)){
			return false;
		}
	}
	return true;
}