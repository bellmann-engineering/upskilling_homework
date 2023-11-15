# Patterns: Homework 3 Solution

In the last session we learned about the factory method pattern and its benefits. It reduuces dependencies by allowing the client code to create objects without specifying their concrete classes, thereby decoupling the instantiation of objects from the client code and promoting flexibility in object creation.

# Explaination

- The Location class encapsulates the latitude and longitude information.
- The GPS class is responsible for tracking the current location. The factory method in the GPSFactory class allows the creation of GPS instances without directly exposing its constructor, promoting encapsulation.
- The client code demonstrates the usage of the factory method to create a GPS object, update its location, and retrieve the current location.

```cpp
// GPSExercise.cpp

#include <iostream>

// Location class
class Location {
private:
    double latitude;
    double longitude;

public:
    Location(double latitude, double longitude)
        : latitude(latitude), longitude(longitude) {}

    double getLatitude() const {
        return latitude;
    }

    double getLongitude() const {
        return longitude;
    }
};

// GPS class
class GPS {
private:
    Location* currentLocation;

public:
    GPS() : currentLocation(nullptr) {}

    ~GPS() {
        delete currentLocation;
    }

    Location* getCurrentLocation() const {
        return currentLocation;
    }

    void updateLocation(double latitude, double longitude) {
        // Simulating an update by creating a new Location object
        delete currentLocation; // Free the previous location memory
        currentLocation = new Location(latitude, longitude);
    }
};

// GPSFactory class
class GPSFactory {
public:
    GPS* createGPS() {
        return new GPS();
    }
};

int main() {
    // Demonstrate the usage of the classes
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
