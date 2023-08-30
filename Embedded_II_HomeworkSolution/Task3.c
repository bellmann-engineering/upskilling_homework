#include <stdio.h>

int main() {
    int n;
    
    // Prompt user for a number
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Loop to generate multiplication table up to 10
    for (int i = 1; i <= 10; i++) {
        // Calculate the result of multiplication
        int result = n * i;
        
        // Display the multiplication expression and result
        printf("%d x %d = %d\n", n, i, result);
        
        // Check if the loop has reached 10 and break if true
        if (i == 10) {
            break;
        }
    }
    
    return 0;
}
