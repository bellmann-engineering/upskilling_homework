# Patterns: Homework 2

In the last session we learned how to use an adapter pattern in order to wrap an existing legacy system. This is what this exercise is about.

## Exercise: Adapter Pattern in C++

## Problem Statement

You are working on a project that involves interacting with various external services to fetch weather data. The existing codebase is designed to work with a `WeatherService` interface, which includes methods such as `getTemperature()`, `getHumidity()`, and `getWindSpeed()`.

Recently, a new external weather service, `ModernWeatherService`, has been introduced with a different interface. Your task is to implement an adapter, `ModernWeatherAdapter`, that allows the existing code to seamlessly integrate with the new service without modifying the core functionality.

## Instructions

1. Create a `WeatherService` interface with methods `getTemperature()`, `getHumidity()`, and `getWindSpeed()`.

2. Implement the existing `LegacyWeatherService` class that conforms to the `WeatherService` interface.

3. Introduce a new external service, `ModernWeatherService`, with methods `fetchTemperature()`, `fetchHumidity()`, and `fetchWindSpeed()`.

4. Create an adapter, `ModernWeatherAdapter`, that adapts the `ModernWeatherService` to the `WeatherService` interface. The adapter should implement the necessary methods by utilizing the methods from `ModernWeatherService`.

5. In the client code, demonstrate the use of both `LegacyWeatherService` and `ModernWeatherAdapter` interchangeably without modifying the existing code that relies on the `WeatherService` interface.

## Example

```cpp
// WeatherService interface
class WeatherService {
public:
    virtual double getTemperature() = 0;
    virtual double getHumidity() = 0;
    virtual double getWindSpeed() = 0;
};

// LegacyWeatherService implementing WeatherService
class LegacyWeatherService : public WeatherService {
public:
    double getTemperature() override;
    double getHumidity() override;
    double getWindSpeed() override;
};

// ModernWeatherService with a different interface
class ModernWeatherService {
public:
    double fetchTemperature();
    double fetchHumidity();
    double fetchWindSpeed();
};

// Adapter for ModernWeatherService to WeatherService
class ModernWeatherAdapter : public WeatherService {
private:
    ModernWeatherService modernWeatherService;

public:
    ModernWeatherAdapter(ModernWeatherService modernWeatherService);

    double getTemperature() override;
    double getHumidity() override;
    double getWindSpeed() override;
};

// Client code
int main() {
    WeatherService* legacyService = new LegacyWeatherService();
    WeatherService* modernAdapter = new ModernWeatherAdapter(ModernWeatherService());

    // Use legacy and modern services interchangeably without modifying existing code
    double temperature1 = legacyService->getTemperature();
    double humidity1 = legacyService->getHumidity();
    double windSpeed1 = legacyService->getWindSpeed();

    double temperature2 = modernAdapter->getTemperature();
    double humidity2 = modernAdapter->getHumidity();
    double windSpeed2 = modernAdapter->getWindSpeed();

    // Additional client code...
}
