#include "car.h"

Car::Car(const std::string& brand, const std::string& model, int year)
    : brand(brand), model(model), year(year), rented(false) {}

void Car::rentCar() {
    if (!rented) {
        rented = true;
    }
}

void Car::returnCar() {
    if (rented) {
        rented = false;
    }
}

bool Car::isRented() const {
    return rented;
}

const std::string& Car::getBrand() const {
    return brand;
}

const std::string& Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}
