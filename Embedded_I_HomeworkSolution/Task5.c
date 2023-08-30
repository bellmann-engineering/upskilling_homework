#include <stdio.h>

int main() {
    int decimalNumber;
    
    // Prompt user for a decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    // Display the decimal, octal, and hexadecimal representations
    printf("Decimal: %d\n", decimalNumber);
    printf("Octal: %o\n", decimalNumber);
    printf("Hexadecimal: %X\n", decimalNumber);

    return 0;
}
