#include <iostream> // Include the necessary header for input/output
#include <vector> // Include the necessary header for using vectors
#include "car.h" // Include the custom Car class header

int main() {
    std::vector<Car> cars; // Create a vector to store Car objects

    // Populate the vector with Car objects
    cars.push_back(Car("BMW", "318i", 2022));
    cars.push_back(Car("BMW", "520d", 2021));
    cars.push_back(Car("BMW", "X3", 2023));
    cars.push_back(Car("BMW", "330e", 2022));
    cars.push_back(Car("BMW", "M4", 2021));

    // Rent and return cars
    cars[0].rentCar();
    cars[2].rentCar();
    cars[2].returnCar();
    cars[4].rentCar();

    // Display car status
    std::cout << "Car Overview:\n";
    std::cout << "| Brand      | Model       | Year | Status      |\n";
    std::cout << "|------------|--------------|------|-------------|\n";
    for (const Car& car : cars) {
        std::cout << "| " << car.getBrand() << "   | " << car.getModel() << "     | " << car.getYear() << " | " << (car.isRented() ? "Rented" : "Not Rented") << " |\n";
    }

    return 0; // Return 0 to indicate successful execution
}
