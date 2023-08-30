#include <stdio.h>

int main() {
    char choice;
    float temperature, converted;

    // Prompt user for conversion choice
    printf("Choose conversion:\n");
    printf("a) Celsius -> Fahrenheit\n");
    printf("b) Fahrenheit -> Celsius\n");
    
    // Read user choice
    scanf(" %c", &choice);

    // Perform chosen conversion
    if (choice == 'a') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        
        // Convert Celsius to Fahrenheit
        converted = (temperature * 1.8) + 32;
        printf("%.2f°C is %.2f°F\n", temperature, converted);
    } else if (choice == 'b') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        
        // Convert Fahrenheit to Celsius
        converted = (temperature - 32) * 5 / 9;
        printf("%.2f°F is %.2f°C\n", temperature, converted);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
