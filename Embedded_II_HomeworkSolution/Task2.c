#include <stdio.h>

int main() {
    int num;
    
    while (1) {
        // Prompt user for input and explain how to exit
        printf("Enter an integer (0 to exit): ");
        
        // Read user's input
        scanf("%d", &num);
        
        // Check if user wants to exit
        if (num == 0) {
            break; // Exit the loop
        }
        
        // Check if the entered number is even or odd
        if (num % 2 == 0) {
            printf("%d is an even number.\n", num); // Display even message
        } else {
            printf("%d is an odd number.\n", num); // Display odd message
        }
    }
    
    return 0;
}
