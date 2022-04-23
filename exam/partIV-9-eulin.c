
#include <stdio.h>
#include <stdlib.h>

int main(){
	int row, column = 0;
	int size = 0 ;
	char cont = 'y';

	while(cont == 'y'){
		printf("Enter square size:");
		scanf("%d", &size);
		for( row = 0 ;row < size ; row ++){ //to manipulate the format of the rows
			for(column = 0 ; column < size ;column++){  // to manipulate the column's
				if (row == 0 || row == size -1 || column == 0|| column == size -1){
					printf("*");
				}
				else{
					printf(" ");
				} 
			}
			printf("\n"); //print on another row
		}
		//continue or not using the program
		printf("Print another square? Enter y or n: ");
		scanf("%s", &cont);

		if (cont == 'n'){
			printf("END");
		}
		else if(cont != 'y'){
			printf("Not a valid choice. \n");
			printf("Print another square? Enter y/n: ");
			scanf("%s", cont);
		}
	}
return 0;
}