#include <stdio.h>
#include <stdbool.h>

int main() {
    int maxAttempts = 3; // Maximum allowed attempts
    int attempts = 0; // Counter for attempts
    bool validPassword = false; // Assume password is not valid by default
    
    // Loop for password validation attempts
    while (attempts < maxAttempts) {
        char password[20]; // Array to store password
        
        // Prompt user to enter password
        printf("Enter your password: ");
        scanf("%s", password);
        
        int length = 0; // Initialize password length counter
        int digitCount = 0; // Initialize digit count counter
        
        // Loop to calculate password length and count digits
        while (password[length] != '\0') {
            if (password[length] >= '0' && password[length] <= '9') {
                digitCount++; // Increment digit count if character is a digit
            }
            length++; // Move to the next character
        }
        
        // Check password length and digit count for validity
        if (length >= 5 && length <= 10 && digitCount >= 1) {
            validPassword = true; // Set validPassword to true and exit loop
            break;
        } else {
            // Display error message for invalid password
            printf("Invalid password. Password must be between 5 and 10 characters and include at least one digit.\n");
        }
        
        attempts++; // Increment attempts counter
    }
    
    // Display password validation result
    if (validPassword) {
        printf("Password is valid.\n");
    } else {
        printf("Exceeded maximum attempts. Password validation failed.\n");
    }
    
    return 0;
}
