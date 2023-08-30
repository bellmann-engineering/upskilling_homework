#include <stdio.h>

// Function to calculate travel time based on distance and average speed
float calculateTravelTime(float distance, float averageSpeed) {
    return distance / averageSpeed; // Calculate and return travel time
}

// Function to recommend break times
void recommendBreaks(int totalBreaks) {
    printf("Recommended Break Times:\n");
    float breakInterval = 1.0; // Set break interval to 1 hour
    for (int i = 1; i <= totalBreaks; i++) {
        printf("Break %d: %.1f hours\n", i, i * breakInterval);
    }
}

int main() {
    float distance, averageSpeed;
    int totalBreaks;

    // Prompt user to input destination distance, average speed, and number of planned breaks
    printf("Enter the destination distance (miles): ");
    scanf("%f", &distance);
    printf("Enter the average speed (MPH): ");
    scanf("%f", &averageSpeed);
    printf("Enter the number of planned breaks: ");
    scanf("%d", &totalBreaks);

    // Calculate travel time using the calculateTravelTime function
    float travelTime = calculateTravelTime(distance, averageSpeed);
    printf("Estimated Travel Time: %.2f hours\n", travelTime);

    // Call the recommendBreaks function to display recommended break times
    recommendBreaks(totalBreaks);

    return 0;
}
