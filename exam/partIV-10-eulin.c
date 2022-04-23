#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double x, result, y, z, tol = 0.00001;

    printf("Enter number to find its square root: ");
    scanf("%lf", &num); // long float for double

    y = 1; // initialize the value of the first approximation as y = 1
    z = 0; // initialize to 0 since yn+1 still has no value

    while( fabs(z - y) > tol){ // stop iteration until yn+1 - y is less than or equal to 'tol'
        z = y; // that z will contain the last value of y
        y = ((y + (x / y))/2);
    }

    result = fabs(y); // finding the absolute value of y in double

    printf("The square root of %.2f is %lf.\n", x, result);

    system("PAUSE");

    return 0;
}