# Patterns: Homework 3

In the last session we learned about the factory method pattern and its benefits. It makes dependencies less by allowing the client code to create objects without specifying their concrete classes, thereby decoupling the instantiation of objects from the client code and promoting flexibility in object creation.

## Exercise: Designing a GPS Class with Factory Method

## Problem Statement

You are tasked with designing a GPS (Global Positioning System) class that encapsulates the functionality for tracking and providing location information. To enhance flexibility and maintainability, implement a factory method for creating instances of the GPS class.

## Instructions

1. Create a `Location` class that represents a geographic location, including latitude and longitude.

2. Design a `GPS` class with the following features:
    - A private member variable to store the current location.
    - A method `getCurrentLocation()` that returns the current location.
    - A method `updateLocation(double latitude, double longitude)` that updates the current location.

3. Implement a `GPSFactory` class with a factory method `createGPS()` that returns a new instance of the `GPS` class.

4. Demonstrate the usage of the `GPS` class and the factory method in the client code. Instantiate a `GPS` object using the `GPSFactory` and showcase the ability to update and retrieve the current location.

## Example

```cpp
#include <iostream>

// Forward declaration
class Location;

// GPS class
class GPS {
private:
    Location* currentLocation;

public:
    GPS();
    ~GPS();

    Location* getCurrentLocation() const;
    void updateLocation(double latitude, double longitude);
};

// Location class
class Location {
private:
    double latitude;
    double longitude;

public:
    Location(double latitude, double longitude);
    double getLatitude() const;
    double getLongitude() const;
};

// GPSFactory class
class GPSFactory {
public:
    GPS* createGPS();
};

int main() {
    GPSFactory gpsFactory;
    GPS* gps = gpsFactory.createGPS();

    // Simulate updating and retrieving the current location
    gps->updateLocation(37.7749, -122.4194);
    Location* currentLocation = gps->getCurrentLocation();

    // Display the current location
    std::cout << "Current Location: Latitude " << currentLocation->getLatitude()
              << ", Longitude " << currentLocation->getLongitude() << std::endl;

    // Don't forget to free the allocated memory
    delete gps;
    delete currentLocation;

    return 0;
}
