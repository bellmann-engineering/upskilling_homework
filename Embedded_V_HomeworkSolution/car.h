#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;
    bool rented;

public:
    Car(const std::string& brand, const std::string& model, int year);
    void rentCar();
    void returnCar();
    bool isRented() const;
    const std::string& getBrand() const;
    const std::string& getModel() const;
    int getYear() const;
};

#endif // CAR_H
