#include <stdio.h>

int main() {
    float dailyConsumption, pricePerKWh, annualConsumption, annualCosts;

    printf("Enter daily consumption in kWh: ");
    scanf("%f", &dailyConsumption);
    printf("Enter price per kWh: ");
    scanf("%f", &pricePerKWh);

    annualConsumption = dailyConsumption * 365;
    annualCosts = annualConsumption * pricePerKWh;

    printf("Annual consumption: %.2f kWh\n", annualConsumption);
    printf("Annual costs: $%.2f\n", annualCosts);

    return 0;
}
