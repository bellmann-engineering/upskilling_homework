#ifndef CAR_H // Header guard to prevent multiple inclusions of this header
#define CAR_H

#include <string> // Include the necessary header for string usage

class Car {
private:
    std::string brand; // Private member variable for the car's brand
    std::string model; // Private member variable for the car's model
    int year; // Private member variable for the car's manufacturing year
    bool rented; // Private member variable to track rental status

public:
    // Constructor to initialize car properties
    Car(const std::string& brand, const std::string& model, int year);

    // Method to rent a car
    void rentCar();

    // Method to return a rented car
    void returnCar();

    // Method to check if a car is rented
    bool isRented() const;

    // Method to get the brand of the car
    const std::string& getBrand() const;

    // Method to get the model of the car
    const std::string& getModel() const;

    // Method to get the year of the car
    int getYear() const;
};

#endif // CAR_H
