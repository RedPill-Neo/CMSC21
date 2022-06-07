// Lecture 13 - Assignment

#include <stdio.h> // for input and output
#include <math.h> // for sqrt() and pow()
#include <stdlib.h> // for system pausing

// defining structure line
struct line{ 
    struct point{ // nested structure point (point1 and point2)
        float x;
        float y;
    }point1, point2;

    float *midpoint; // array of 2 floats, the midpoint
    float slope; 
    float distance;
};

// declaring functions
void solveSlope(struct line* line1);
void *solveMidpoint(struct line line1);
void solveDistance(struct line* line1);
void getSlopeInterceptForm(struct line line1);

int main(){
    struct line a_line; // declares a struct line as a_line
    printf("\nEnter a point 1 (x y): "); // asks for two values, the first point
    scanf("%2f %2f", &a_line.point1.x, &a_line.point1.y); // scans the point
    printf("\nEnter a point 2 (x y): "); // for the second point
    scanf("%2f %2f", &a_line.point2.x, &a_line.point2.y);

    solveSlope(&a_line); // calls the function that will assign the calculated value to member slope in struct line
    solveMidpoint(a_line); // assigns an array to member midpoint in struct line
    solveDistance(&a_line); // assigns calculated value to the distance in struct line

    printf("\nSlope: %.2f", a_line.slope); // prints calculated slope
    printf("\nMidpoint: [%.2f, %.2f]", a_line.midpoint[0], a_line.midpoint[1]); // prints midpoint
    printf("\nDistance between 2 points: %.2f", a_line.distance); // prints distance
    getSlopeInterceptForm(a_line); // calls function to print the slope-intercept form

    
    printf("\n");
    system("PAUSE");
    return 0;

}

// defines functions
void solveSlope(struct line* line1){ // calculates the slope using formula
    line1->slope = ((line1->point1.y - line1->point2.y)/(line1->point1.x - line1->point2.x));
}

void* solveMidpoint(struct line line1){ // calculates the midpoint using midpoint formula
    line1.midpoint[0] = ((line1.point1.x + line1.point2.x)/2);
    line1.midpoint[1] = ((line1.point1.y + line1.point2.y)/2);
}

void solveDistance(struct line* line1){ // finds the distance using functions from math.h
    line1->distance = sqrt(pow((line1->point1.x - line1->point2.x), 2) + (pow((line1->point1.y - line1->point2.y), 2)));
}

void getSlopeInterceptForm(struct line line1){ // evaluates the function slope intercept form
    float b;
    b = - (line1.slope * line1.point1.x); // operation to find b (in y = mx + b) using any point inputted by the user
    printf("\nSlope Intercept form:\n\ty = (%.2f) x + (%.2f)\n", line1.slope, b); // prints the slope intercept-form if called
}



