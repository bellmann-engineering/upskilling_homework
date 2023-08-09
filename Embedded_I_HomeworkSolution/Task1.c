#include <stdio.h>

int main() {
    char choice;
    float temperature, converted;

    printf("Choose conversion:\n");
    printf("a) Celsius -> Fahrenheit\n");
    printf("b) Fahrenheit -> Celsius\n");
    scanf(" %c", &choice);

    if (choice == 'a') {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temperature);
        converted = (temperature * 1.8) + 32;
        printf("%.2f°C is %.2f°F\n", temperature, converted);
    } else if (choice == 'b') {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temperature);
        converted = (temperature - 32) * 5 / 9;
        printf("%.2f°F is %.2f°C\n", temperature, converted);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
