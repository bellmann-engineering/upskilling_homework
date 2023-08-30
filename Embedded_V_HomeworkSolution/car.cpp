#include "car.h" // Include the header file for the Car class

// Constructor to initialize car properties
Car::Car(const std::string& brand, const std::string& model, int year)
    : brand(brand), model(model), year(year), rented(false) {}

// Method to rent a car if it's not already rented
void Car::rentCar() {
    if (!rented) { // Check if the car is not already rented
        rented = true; // Set the rented flag to true
    }
}

// Method to return a rented car
void Car::returnCar() {
    if (rented) { // Check if the car is rented
        rented = false; // Set the rented flag to false
    }
}

// Method to check if a car is currently rented
bool Car::isRented() const {
    return rented; // Return the value of the rented flag
}

// Method to get the brand of the car
const std::string& Car::getBrand() const {
    return brand; // Return the brand member variable
}

// Method to get the model of the car
const std::string& Car::getModel() const {
    return model; // Return the model member variable
}

// Method to get the year of the car
int Car::getYear() const {
    return year; // Return the year member variable
}
