# Clean Code: Homework 3 Solution

# Logging System Refactoring

This code includes the Logger interface (`LoggerInterface`), two concrete implementations (`ConsoleLogger` and `FileLogger`), and the `Logger` class that adheres to the Dependency Inversion Principle by accepting a logger interface in its constructor. The `main` function demonstrates how to use different loggers with the `Logger` class.

## Code Overview

### Logger Interface

```cpp
class LoggerInterface {
public:
    virtual void log(const std::string& message) = 0;
    virtual ~LoggerInterface() = default;
};

class ConsoleLogger : public LoggerInterface {
public:
    void log(const std::string& message) override {
        std::cout << "Log to console: " << message << std::endl;
    }
};

class FileLogger : public LoggerInterface {
public:
    void log(const std::string& message) override {
        std::ofstream file("log.txt", std::ios::app);
        if (file.is_open()) {
            file << "Log to file: " << message << std::endl;
            file.close();
        }
    }
};

class Logger {
public:
    Logger(LoggerInterface* logger) : logger(logger) {}

    void log(const std::string& message) {
        logger->log(message);
    }

private:
    LoggerInterface* logger;
};


int main() {
    // Example usage
    LoggerInterface* consoleLogger = new ConsoleLogger();
    LoggerInterface* fileLogger = new FileLogger();

    Logger consoleLoggerClient(consoleLogger);
    Logger fileLoggerClient(fileLogger);

    consoleLoggerClient.log("This is a console log message.");
    fileLoggerClient.log("This is a file log message.");

    // Don't forget to clean up memory in a real-world scenario
    delete consoleLogger;
    delete fileLogger;

    return 0;
}
