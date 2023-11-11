# Patterns: Homework 2 Solution

This is a basic solution for the WeatherService exercise in C++. 
Note that this is a simplified example, and in a real-world scenario, 
you might have more complex implementations for fetching weather data from external services.

```cpp
#include <iostream>

// WeatherService interface / abstract base class
class WeatherService {
public:
    virtual double getTemperature() = 0;
    virtual double getHumidity() = 0;
    virtual double getWindSpeed() = 0;
};

// LegacyWeatherService implementing WeatherService
class LegacyWeatherService : public WeatherService {
public:
    double getTemperature() override {
        std::cout << "Fetching temperature from legacy service." << std::endl;
        // Implement actual logic to fetch temperature from the legacy service
        return 25.0;
    }

    double getHumidity() override {
        std::cout << "Fetching humidity from legacy service." << std::endl;
        // Implement actual logic to fetch humidity from the legacy service
        return 50.0;
    }

    double getWindSpeed() override {
        std::cout << "Fetching wind speed from legacy service." << std::endl;
        // Implement actual logic to fetch wind speed from the legacy service
        return 10.0;
    }
};

// ModernWeatherService with a different interface
class ModernWeatherService {
public:
    double fetchTemperature() {
        std::cout << "Fetching temperature from modern service." << std::endl;
        // Implement actual logic to fetch temperature from the modern service
        return 28.0;
    }

    double fetchHumidity() {
        std::cout << "Fetching humidity from modern service." << std::endl;
        // Implement actual logic to fetch humidity from the modern service
        return 45.0;
    }

    double fetchWindSpeed() {
        std::cout << "Fetching wind speed from modern service." << std::endl;
        // Implement actual logic to fetch wind speed from the modern service
        return 12.0;
    }
};

// Adapter for ModernWeatherService to WeatherService
class ModernWeatherAdapter : public WeatherService {
private:
    ModernWeatherService modernWeatherService;

public:
    ModernWeatherAdapter(ModernWeatherService modernWeatherService)
        : modernWeatherService(modernWeatherService) {}

    double getTemperature() override {
        return modernWeatherService.fetchTemperature();
    }

    double getHumidity() override {
        return modernWeatherService.fetchHumidity();
    }

    double getWindSpeed() override {
        return modernWeatherService.fetchWindSpeed();
    }
};

// Client code
int main() {
    // Use legacy and modern services interchangeably without modifying existing code

    WeatherService* legacyService = new LegacyWeatherService();
    WeatherService* modernAdapter = new ModernWeatherAdapter(ModernWeatherService());

    double temperature1 = legacyService->getTemperature();
    double humidity1 = legacyService->getHumidity();
    double windSpeed1 = legacyService->getWindSpeed();

    double temperature2 = modernAdapter->getTemperature();
    double humidity2 = modernAdapter->getHumidity();
    double windSpeed2 = modernAdapter->getWindSpeed();

    // Additional client code...

    delete legacyService;
    delete modernAdapter;

    return 0;
}
