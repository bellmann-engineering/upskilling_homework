#include <stdio.h>

int main() {
    char firstName[50], lastName[50];
    int birthYear, currentYear = 2023, age;

    // Prompt user for first name
    printf("Enter first name: ");
    scanf("%s", firstName);
    
    // Prompt user for last name
    printf("Enter last name: ");
    scanf("%s", lastName);
    
    // Prompt user for year of birth
    printf("Enter year of birth: ");
    scanf("%d", &birthYear);

    // Calculate age
    age = currentYear - birthYear;

    // Display user's full name and age
    printf("%s %s (%d years old)\n", firstName, lastName, age);

    return 0;
}
