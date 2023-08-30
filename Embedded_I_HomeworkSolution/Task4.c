#include <stdio.h>

int main() {
    float dailyConsumption, pricePerKWh, annualConsumption, annualCosts;

    // Prompt user for daily consumption in kWh
    printf("Enter daily consumption in kWh: ");
    scanf("%f", &dailyConsumption);
    
    // Prompt user for price per kWh
    printf("Enter price per kWh: ");
    scanf("%f", &pricePerKWh);

    // Calculate annual consumption and costs
    annualConsumption = dailyConsumption * 365;
    annualCosts = annualConsumption * pricePerKWh;

    // Display annual consumption and costs
    printf("Annual consumption: %.2f kWh\n", annualConsumption);
    printf("Annual costs: $%.2f\n", annualCosts);

    return 0;
}
