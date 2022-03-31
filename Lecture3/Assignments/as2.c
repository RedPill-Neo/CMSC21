/*Item 2, Lecture 3 Assignment*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int first_dig, second_dig;

	printf("Enter a two digit number: ");
	scanf("%1d%1d", &first_dig, &second_dig);

	printf("Numbers entered in words: ");

	if(first_dig == 1){
		switch(second_dig % 10){
			case 0: printf("Ten"); break;
			case 1: printf("Eleven"); break;
			case 2: printf("Twelve"); break;
			case 3: printf("Thirteen"); break;
			case 4: printf("Fourteen"); break;
			case 5: printf("Fifteen"); break;
			case 6: printf("Sixteen"); break;
			case 7: printf("Seventeen"); break;
			case 8: printf("Eighteen"); break;
			case 9: printf("Nineteen"); break;
		}
		printf("\n");
		system("PAUSE");
		return 0;
	}

	switch(first_dig % 10){
    	case 1: printf("Ten"); break;
    	case 2: printf("Twenty"); break;
    	case 3: printf("Thirty"); break;
    	case 4: printf("Forty"); break;
    	case 5: printf("Fifty"); break;
    	case 6: printf("Sixty"); break;
    	case 7: printf("Seventy"); break;
    	case 8: printf("Eighty"); break;
    	case 9: printf("Ninety"); break;
    }

	switch(second_dig % 10){
    	case 0: break;
    	case 1: printf("-one"); break;
    	case 2: printf("-two"); break;
    	case 3: printf("-three"); break;
    	case 4: printf("-four"); break;
    	case 5: printf("-five"); break;
    	case 6: printf("-six"); break;
    	case 7: printf("-seven"); break;
    	case 8: printf("-eight"); break;
    	case 9: printf("-nine"); break;
    }
    printf("\n");
	system("PAUSE");
	return 0;
}