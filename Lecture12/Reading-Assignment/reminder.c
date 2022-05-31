/*Prints a one month reminder list*/

#include <stdio.h> // for input and output
#include <string.h> // for string operation functions
#include <stdlib.h>

#define MAX_REMIND 50 // defining a constant for the size of reminders (the size of the row)
#define MSG_LEN 60 // length of the column, the second dimension

int read_line(char str[], int n); // defining functions

int main(void){ 
    // declaring string arrays and variables
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], msg_str[MSG_LEN + 1];
    char day, i, j, num_remind = 0;

    for(;;){
        /*if there comes a point where the number of day and reminder combinations
        exceeded the maximum no. defined, the program will have to prompt the user 
        and exit the for loop using break*/

        if(num_remind == MAX_REMIND){
            printf("--No space left --\n");
            break;
        }

        /*for each iteration, the program will ask for an input*/
        printf("Enter day and reminder: ");
        scanf("%2d", &day); //the first two character inputs will be scanned as an integer to var day
        if(day == 0){ // inputing 0 as the day will also signal the program to end the for loop
            break;
        }

        sprintf(day_str, "%2d", day); //the sprintf function will convert the int day back into string form and store to day_str
        read_line(msg_str, MSG_LEN); // function to read the input reminder to msg_str string array

        for(i = 0; i < num_remind; i++){ // for-loop to iterate through each day-reminder combination
            if(strcmp(day_str, reminders[i]) < 0){ // the program will search the array to know where the day belongs using strcmp comparison
                break;
            } 
        }
        /*if the string is below the point specified in the previous loop,
          it will move that string down the array, copying that string using strcpy*/
        for(j = num_remind; j > i; j--){
            strcpy(reminders[j], reminders[j - 1]);
        }

        strcpy(reminders[i], day_str); // copies the day into the array
        strcat(reminders[i], msg_str); // appends the reminder to that element (day)

        num_remind++; // increment, to move on to the next reminder
    }

    printf("\nDay Reminder\n");
    for(i = 0; i < num_remind; i++){ // iterate through the reminder array and print all the day-reminder combinations
        printf("%s\n", reminders[i]); 
    }

    system("PAUSE");
    return 0;
}

// defining function read_line to read multiple lines of input, and assign to the arg array
int read_line(char str[], int n){ 
    int ch, i = 0;
    while ((ch = getchar()) != '\n'){ 
        if(i < n){
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i; 
}