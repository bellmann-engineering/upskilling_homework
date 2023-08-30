#include <stdio.h>

// Function to calculate time to reach a target speed with given acceleration
float calculateTimeToReachSpeed(float initialSpeed, float targetSpeed, float acceleration) {
    return (targetSpeed - initialSpeed) / acceleration; // Calculate and return time
}

int main() {
    float initialSpeed, targetSpeed, acceleration;

    // Prompt user to input initial speed, target speed, and acceleration
    printf("Enter the initial speed (m/s): ");
    scanf("%f", &initialSpeed);
    printf("Enter the target speed (m/s): ");
    scanf("%f", &targetSpeed);
    printf("Enter the acceleration (m/s^2): ");
    scanf("%f", &acceleration);

    // Calculate time using the calculateTimeToReachSpeed function
    float time = calculateTimeToReachSpeed(initialSpeed, targetSpeed, acceleration);

    // Display the calculated time to reach the target speed
    // %.2f formats the number like this 2.42 with 2 digits after the comma
    printf("Time to reach %.2f m/s: %.2f seconds\n", targetSpeed, time);

    return 0;
}
