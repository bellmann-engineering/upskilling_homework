#include <stdio.h>

int main() {
    int decimalNumber;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Decimal: %d\n", decimalNumber);
    printf("Octal: %o\n", decimalNumber);
    printf("Hexadecimal: %X\n", decimalNumber);

    return 0;
}
