# Clean Code: Homework 3

In the last session we learned about the all 5 SOLID principles. In this exercise we want to refactor a given codebase.

## Background

You are asked to improve logging system in a software project. The current implementation is not well-structured and does not adhere to SOLID principles. 
Your goal is to refactor the code to make it more maintainable, scalable, and in compliance with SOLID principles.

## Codebase Overview

The current codebase has a `Logger` class responsible for logging messages to various outputs. However, the code violates SOLID principles in different aspects.

## Tasks

1. **Single Responsibility Principle (SRP):**
   - Identify how the existing code violates the Single Responsibility Principle in the `Logger` class.
   - Refactor the code to adhere to SRP.

2. **Open/Closed Principle (OCP):**
   - Assess whether the code supports the Open/Closed Principle.
   - Refactor the code to make it more open for extension and closed for modification.

3. **Liskov Substitution Principle (LSP):**
   - Evaluate if the codebase follows the Liskov Substitution Principle.
   - Adjust the code to ensure that substituting derived classes for base classes does not alter the correctness of the program.

4. **Interface Segregation Principle (ISP):**
   - Identify any interfaces that are too large and violate the Interface Segregation Principle.
   - Refactor the interfaces to follow ISP.

5. **Dependency Inversion Principle (DIP):**
   - Investigate how dependency management is handled in the code.
   - Refactor the code to adhere to the Dependency Inversion Principle.
   
   
## Code

### Logger Class

```cpp
#include <iostream>
#include <fstream>
#include <string>

class Logger {
public:
    void logToConsole(const std::string& message) {
        std::cout << "Log to console: " << message << std::endl;
    }

    void logToFile(const std::string& message) {
        std::ofstream file("log.txt", std::ios::app);
        if (file.is_open()) {
            file << "Log to file: " << message << std::endl;
            file.close();
        }
    }

    // Other methods for logging to different outputs...

    // This class violates SOLID principles, especially SRP and OCP.
};
