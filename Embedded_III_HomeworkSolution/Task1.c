#include <stdio.h>

float calculateKMPL(float distance, float fuelUsed) {
    return distance / fuelUsed;
}

int main() {
    float distance, fuelUsed;
    printf("Enter the distance traveled (kilometers): ");
    scanf("%f", &distance);
    printf("Enter the amount of fuel used (liters): ");
    scanf("%f", &fuelUsed);

    float kmpl = calculateKMPL(distance, fuelUsed);
    printf("Fuel efficiency: %.2f km/L\n", kmpl);

    return 0;
}
