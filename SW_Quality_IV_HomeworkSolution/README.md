# Clean Code: Homework 4 Solution

## Clean Code: Exercise - Refactoring Legacy Code

## Background

In this exercise, we'll be refactoring a legacy codebase named `OrderSystem` that lacks adherence to clean code principles. The provided code contains a `LegacySystem` class with various functionalities related to order processing. The goal is to improve the code's readability, maintainability, and adherence to clean code principles.

## Code Overview

The `OrderSystem` class represents an existing system with multiple responsibilities related to order processing. The goal is to refactor the code to make it more modular, following principles like Single Responsibility Principle (SRP) and other clean code practices.

## Refactored Code

### 1. Single Responsibility Principle (SRP)

In the original code, the `OrderSystem` class handled various responsibilities, violating SRP. To address this, responsibilities have been separated into distinct classes.

#### Original Method:

```cpp
class OrderSystem {
public:
    void processOrder(const std::string& order) {
        validateOrder(order);
        updateInventory(order);
        generateOrderConfirmation(order);
        notify("Order processed successfully");
    }

    // ... other methods ...
};
```

#### Refactored Method:

```cpp
class OrderProcessor {
public:
    void processOrder(const std::string& order) {
        validateOrder(order);
        updateInventory(order);
        generateOrderConfirmation(order);
        notify("Order processed successfully");
    }

private:
    // ... other methods ...
};

```

### 2. Code Duplication

There was code duplication in the original methods for processing orders and generating invoices. 
The refactored code eliminates this duplication by introducing a separate InvoiceGenerator class.

#### Original Method:

```cpp
class OrderSystem {
public:
    void processOrder(const std::string& order) {
        // ...
    }

    void generateInvoice(const std::string& order) {
        // ...
    }

    // ... other methods ...
};

```

#### Refactored Method:

```cpp
class InvoiceGenerator {
public:
    void generateInvoice(const std::string& order) {
        // ...
    }
};
```

### 3. Modularity

#### Original Method:

```cpp
class OrderSystem {
public:
    void processOrder(const std::string& order) {
        validateOrder(order);
        updateInventory(order);
        generateOrderConfirmation(order);
        sendNotification("Order processed successfully");
    }

    // ... other methods ...
};


```

#### Refactored Method:

```cpp
class OrderValidator {
public:
    void validateOrder(const std::string& order) {
        // ...
    }
};

class InventoryUpdater {
public:
    void updateInventory(const std::string& order) {
        // ...
    }
};

class NotificationSender {
public:
    void notify(const std::string& message) {
        // ...
    }
};

class OrderProcessor {
public:
    void processOrder(const std::string& order) {
        validator.validateOrder(order);
        inventoryUpdater.updateInventory(order);
        generator.generateOrderConfirmation(order);
        sender.notify("Order processed successfully");
    }

private:
    OrderValidator validator;
    InventoryUpdater inventoryUpdater;
    OrderConfirmationGenerator generator;
    NotificationSender sender;
};

```

### 4. Naming Conventions

In the original code, method and class names were not consistently descriptive. The refactored code introduces more meaningful names to enhance readability.

#### Original Method:

```cpp
class OrderSystem {
public:
    void processOrder(const std::string& order) {
        // ...
    }

    // ... other methods ...
};


```

#### Refactored Method:

```cpp

class OrderProcessor {
public:
    void processOrder(const std::string& order) {
        // ...
    }

    // ... other methods ...
};

```

### 5. Comments and Documentation

In the refactored code, comments and documentation have been added or revised to enhance understanding of each method's purpose and functionality.

#### Original Method:

```cpp
class OrderSystem {
public:
    void processOrder(const std::string& order) {
        validateOrder(order);
        updateInventory(order);
        generateOrderConfirmation(order);
        sendNotification("Order processed successfully");
    }

    // ... other methods ...
};


```

#### Refactored Method:

```cpp
class OrderProcessor {
public:
    /**
     * Process an incoming order by performing validation, updating inventory,
     * generating order confirmation, and sending notifications.
     *
     * @param order The order to be processed.
     */
    void processOrder(const std::string& order) {
        validator.validateOrder(order);
        inventoryUpdater.updateInventory(order);
        generator.generateOrderConfirmation(order);
        sender.notify("Order processed successfully");
    }

private:
    OrderValidator validator;
    InventoryUpdater inventoryUpdater;
    OrderConfirmationGenerator generator;
    NotificationSender sender;
};


```

The refactored code separates concerns into distinct classes, eliminates code duplication, improves modularity, enhances naming conventions, and provides clear comments/documentation. 
These changes contribute to a more maintainable and readable codebase.
