#include <stdio.h>

void checkOilChange(int currentMileage, int lastOilChangeMileage, int oilChangeInterval) {
    int mileageSinceLastChange = currentMileage - lastOilChangeMileage;
    if (mileageSinceLastChange >= oilChangeInterval) {
        printf("It's time for an oil change!\n");
    } else {
        printf("No oil change needed yet.\n");
    }
}

int main() {
    int currentMileage, lastOilChangeMileage, oilChangeInterval;
    printf("Enter the current mileage: ");
    scanf("%d", &currentMileage);
    printf("Enter the mileage of last oil change: ");
    scanf("%d", &lastOilChangeMileage);
    printf("Enter the recommended oil change interval: ");
    scanf("%d", &oilChangeInterval);

    checkOilChange(currentMileage, lastOilChangeMileage, oilChangeInterval);

    return 0;
}
