#include <stdio.h>

// Function to calculate kilometers per liter (km/L)
float calculateKMPL(float distance, float fuelUsed) {
    return distance / fuelUsed; // Return the calculated km/L
}

int main() {
    float distance, fuelUsed;

    // Prompt user to input distance and fuel used
    printf("Enter the distance traveled (kilometers): ");
    scanf("%f", &distance);
    printf("Enter the amount of fuel used (liters): ");
    scanf("%f", &fuelUsed);

    // Calculate fuel efficiency using the calculateKMPL function
    float kmpl = calculateKMPL(distance, fuelUsed);

    // Display the calculated fuel efficiency
    printf("Fuel efficiency: %.2f km/L\n", kmpl);

    return 0;
}
