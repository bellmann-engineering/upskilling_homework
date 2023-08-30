#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    // Prompt user for a number
    // %lf means double-precision floating-point number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Calculate the square root of the number (sqrt stands for squre root)
    // we included math.h in order to use sqrt
    squareRoot = sqrt(number);

    // Display the result
    // %.2f is a format specifier used to print a floating-point number with two decimal places.
    printf("Square root of %.2f is %.2f\n", number, squareRoot);

    return 0;
}
