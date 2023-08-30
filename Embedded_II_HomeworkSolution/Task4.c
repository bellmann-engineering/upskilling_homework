#include <stdio.h>

int main() {
    int n;
    int isPrime = 1; // Assume the number is prime by default
    
    // Prompt user for a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Loop to check divisibility from 2 to n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) { // modulo operator
            isPrime = 0; // If divisible, set isPrime to false and break
            break;
        }
    }
    
    // Display whether the number is prime or not
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    return 0;
}
