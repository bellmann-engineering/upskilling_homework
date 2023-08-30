#include <stdio.h>

// Function to check if an oil change is needed based on mileage
void checkOilChange(int currentMileage, int lastOilChangeMileage, int oilChangeInterval) {
    int mileageSinceLastChange = currentMileage - lastOilChangeMileage; // Calculate mileage since last oil change
    if (mileageSinceLastChange >= oilChangeInterval) {
        printf("It's time for an oil change!\n"); // Display message for needed oil change
    } else {
        printf("No oil change needed yet.\n"); // Display message for no oil change needed
    }
}

int main() {
    int currentMileage, lastOilChangeMileage, oilChangeInterval;

    // Prompt user to input current mileage, last oil change mileage, and oil change interval
    printf("Enter the current mileage: ");
    scanf("%d", &currentMileage);
    printf("Enter the mileage of last oil change: ");
    scanf("%d", &lastOilChangeMileage);
    printf("Enter the recommended oil change interval: ");
    scanf("%d", &oilChangeInterval);

    // Call the checkOilChange function to determine if an oil change is needed
    checkOilChange(currentMileage, lastOilChangeMileage, oilChangeInterval);

    return 0;
}
