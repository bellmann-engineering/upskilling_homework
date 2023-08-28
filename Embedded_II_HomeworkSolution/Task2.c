#include <stdio.h>

int main() {
    int num;
    
    while (1) {
        printf("Enter an integer (0 to exit): ");
        scanf("%d", &num);
        
        if (num == 0) {
            break;
        }
        
        if (num % 2 == 0) {
            printf("%d is even.\n", num);
        } else {
            printf("%d is odd.\n", num);
        }
    }
    
    return 0;
}
