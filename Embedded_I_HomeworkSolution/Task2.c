#include <stdio.h>

int main() {
    char firstName[50], lastName[50];
    int birthYear, currentYear = 2023, age;

    printf("Enter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);
    printf("Enter year of birth: ");
    scanf("%d", &birthYear);

    age = currentYear - birthYear;

    printf("%s %s (%d years old)\n", firstName, lastName, age);

    return 0;
}
