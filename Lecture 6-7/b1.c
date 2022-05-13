// 2.1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//  macros to define the size of the 2D array
#define X 9
#define Y 9

int main(){
	int i, cur_point; // var for (i)ndex and current destination/point

	char destination[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I'}; // list of roads
	/*2D array for the road networks; 1 for open 0 for closed*/
	bool road_networks[X][Y]={
		{1, 1, 0, 0, 0, 1, 0, 0, 0},
		{1, 1, 1, 0, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0, 0},
		{1, 0, 1, 0, 0, 1, 0, 0, 0},
		{1, 0, 0, 1, 0, 0, 1, 0, 0},
		{0, 0, 0, 0, 0, 1, 0, 1, 1},
		{0, 0, 0, 0, 0, 0, 0, 0, 1}
	};

	/*Display the adjacency matrix*/
	printf("    "); // space for the table
	for(i = 0; i < 9; i++){ // for each element in the destination[] array, check if C or D
		if(destination[i] == 'C' || destination[i] == 'D'){
			printf("[%c] ", destination[i]); // if C or D, then put inside a bracket then print
		}
		else{
			printf("%c   ", destination[i]); // else, just print with space, for the table
		}
	}
	printf("\n");

	for(int x = 0; x < X; x++){ // for each row
		printf("%c   ", destination[x]); // print the road
		for(int y = 0; y < Y; y++){ // and for each road, print the boolean values (column)
			printf("%d   ", road_networks[x][y]); // x and y as the coordinates (row and column)
		}
		printf("\n");
	}

	/*Find the nearest charging station*/

	printf("Which point are you located? 0-A, 1-B, 2-C, 3-D, 4-E, 5-F, 6-G, 7-H, 8-I \n");
	scanf("%d", &cur_point);
	printf("Current Point: %c\n", destination[cur_point]); //using the int value of cur_point as the index

	for(i = 0; i < 9; i++){
		if(destination[cur_point] == 'C' || destination[cur_point] == 'D'){ // if at charging point, prompt "arrived"
			printf("point: %c arrived at the charging station\n", destination[cur_point]);
			system("PAUSE");
			return 0; // end program
		}
		else if(road_networks[cur_point][i]){ // using cur_point and the index as coordinate, determine the bool
			printf("Now at point %c\n", destination[i]); //if true, then pass through the point, until the charging station
			cur_point = i;
		}
	}

	system("PAUSE"); 
	return 0;

}