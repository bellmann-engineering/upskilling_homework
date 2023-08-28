#include <stdio.h>
#include <stdbool.h>

int main() {
    int maxAttempts = 3;
    int attempts = 0;
    bool validPassword = false;
    
    while (attempts < maxAttempts) {
        char password[20];
        printf("Enter your password: ");
        scanf("%s", password);
        
        int length = 0;
        int digitCount = 0;
        while (password[length] != '\0') {
            if (password[length] >= '0' && password[length] <= '9') {
                digitCount++;
            }
            length++;
        }
        
        if (length >= 5 && length <= 10 && digitCount >= 1) {
            validPassword = true;
            break;
        } else {
            printf("Invalid password. Password must be between 5 and 10 characters and include at least one digit.\n");
        }
        
        attempts++;
    }
    
    if (validPassword) {
        printf("Password is valid.\n");
    } else {
        printf("Exceeded maximum attempts. Password validation failed.\n");
    }
    
    return 0;
}
