#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed the random number generator
    
    int targetNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess, attempts = 0;
       
    do {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < targetNumber) {
            printf("Higher!\n");
        } else if (guess > targetNumber) {
            printf("Lower!\n");
        } else {
            printf("Correct! You guessed the number %d in %d attempts.\n", targetNumber, attempts);
        }
    } while (guess != targetNumber);
    
    return 0;
}
