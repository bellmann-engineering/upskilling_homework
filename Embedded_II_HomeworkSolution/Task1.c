#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed the random number generator
    
    int targetNumber = rand() % 100 + 1; // Generate random number between 1 and 100
    int guess, attempts = 0;
       
    do {
        // Prompt user for a guess
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;
        
        // Check if the guess is lower than the target
        if (guess < targetNumber) {
            printf("Higher!\n"); // Provide feedback to guess higher
        } else if (guess > targetNumber) {
            printf("Lower!\n"); // Provide feedback to guess lower
        } else {
            // Correct guess: display success message with number of attempts
            printf("Correct! You guessed the number %d in %d attempts.\n", targetNumber, attempts);
        }
    } while (guess != targetNumber); // Continue loop until correct guess
    
    return 0;
}
