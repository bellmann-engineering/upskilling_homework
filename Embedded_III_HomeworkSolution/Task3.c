#include <stdio.h>

float calculateTimeToReachSpeed(float initialSpeed, float targetSpeed, float acceleration) {
    return (targetSpeed - initialSpeed) / acceleration;
}

int main() {
    float initialSpeed, targetSpeed, acceleration;
    printf("Enter the initial speed (m/s): ");
    scanf("%f", &initialSpeed);
    printf("Enter the target speed (m/s): ");
    scanf("%f", &targetSpeed);
    printf("Enter the acceleration (m/s^2): ");
    scanf("%f", &acceleration);

    float time = calculateTimeToReachSpeed(initialSpeed, targetSpeed, acceleration);
    printf("Time to reach %.2f m/s: %.2f seconds\n", targetSpeed, time);

    return 0;
}
