# Clean Code: Homework 4

In the last session we learned about the problems that come with so called legacy code. 

## Background

In this exercise, you will work on refactoring a legacy codebase named `OrderSystem` that lacks adherence to clean code principles. The provided code contains a `LegacySystem` class with various functionalities related to order processing. Your goal is to improve the code's readability, maintainability, and adherence to clean code principles.

## Code Overview

The `OrderSystem` class represents an existing system with multiple responsibilities related to order processing. The goal is to refactor the code to make it more modular, following principles like Single Responsibility Principle (SRP) and other clean code practices.

## Tasks

1. **Single Responsibility Principle (SRP):**
   - Identify how the existing code violates the Single Responsibility Principle in the `OrderSystem` class.
   - Refactor the code to adhere to SRP by separating concerns.

2. **Code Duplication:**
   - Identify any instances of code duplication in the `OrderSystem` class.
   - Refactor the code to eliminate duplicated code and promote reusability.

3. **Modularity:**
   - Assess the modularity of the code. Are there logical units that can be extracted into separate functions or classes?
   - Refactor the code to improve modularity and encapsulation.

4. **Naming Conventions:**
   - Check the naming conventions used in the code. Are the variable and function names descriptive and self-explanatory?
   - Refactor the code to improve naming conventions and enhance code readability.

5. **Comments and Documentation:**
   - Review the existing comments and documentation. Are they clear and helpful?
   - Refactor or add comments/documentation to improve code understanding.

## Code

### Original OrderSystem Class

```cpp
#include <iostream>
#include <string>

class OrderSystem {
public:
    // Process an incoming order
    void processOrder(const std::string& order) {
        validateOrder(order);
        updateInventory(order);
        generateOrderConfirmation(order);
        sendNotification("Order processed successfully");
    }

    // Generate an invoice for a processed order
    void generateInvoice(const std::string& order) {
        validateOrder(order);
        calculateTotalAmount(order);
        generateInvoiceDocument(order);
        sendNotification("Invoice generated successfully");
    }

    // Send a notification with a custom message
    void sendNotification(const std::string& message) {
        logMessage(message);
        // Additional logic for sending notifications, e.g., through email or messaging system.
    }

private:
    // Validate the incoming order
    void validateOrder(const std::string& order) {
        // Existing implementation for order validation
        std::cout << "Validating order: " << order << std::endl;
    }

    // Update the inventory after processing an order
    void updateInventory(const std::string& order) {
        // Existing implementation for updating inventory
        std::cout << "Updating inventory for order: " << order << std::endl;
    }

    // Generate a confirmation for a processed order
    void generateOrderConfirmation(const std::string& order) {
        // Existing implementation for order confirmation
        std::cout << "Order confirmation generated for: " << order << std::endl;
    }

    // Calculate the total amount for generating an invoice
    void calculateTotalAmount(const std::string& order) {
        // Existing implementation for calculating the total amount
        std::cout << "Calculating total amount for order: " << order << std::endl;
    }

    // Generate a document for the generated invoice
    void generateInvoiceDocument(const std::string& order) {
        // Existing implementation for invoice document generation
        std::cout << "Invoice document generated for order: " << order << std::endl;
    }

    // Log a message (common method used by various functionalities)
    void logMessage(const std::string& message) {
        // Existing implementation for logging messages
        std::cout << "Log: " << message << std::endl;
    }
};
