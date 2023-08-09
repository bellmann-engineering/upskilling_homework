#include <stdio.h>
#include <math.h>

int main() {
    double number, squareRoot;

    printf("Enter a number: ");
    scanf("%lf", &number);

    squareRoot = sqrt(number);

    printf("Square root of %.2f is %.2f\n", number, squareRoot);

    return 0;
}
