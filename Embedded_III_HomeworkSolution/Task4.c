#include <stdio.h>

float calculateTravelTime(float distance, float averageSpeed) {
    return distance / averageSpeed;
}

void recommendBreaks(int totalBreaks) {
    printf("Recommended Break Times:\n");
    float breakInterval = 1.0; // Assume 1 hour interval
    for (int i = 1; i <= totalBreaks; i++) {
        printf("Break %d: %.1f hours\n", i, i * breakInterval);
    }
}

int main() {
    float distance, averageSpeed;
    int totalBreaks;

    printf("Enter the destination distance (miles): ");
    scanf("%f", &distance);
    printf("Enter the average speed (MPH): ");
    scanf("%f", &averageSpeed);
    printf("Enter the number of planned breaks: ");
    scanf("%d", &totalBreaks);

    float travelTime = calculateTravelTime(distance, averageSpeed);
    printf("Estimated Travel Time: %.2f hours\n", travelTime);

    recommendBreaks(totalBreaks);

    return 0;
}
