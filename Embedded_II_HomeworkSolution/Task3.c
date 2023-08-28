#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= 10; i++) {
        int result = n * i;
        
        printf("%d x %d = %d\n", n, i, result);
        
        if (i == 10) {
            break;
        }
    }
    
    return 0;
}
