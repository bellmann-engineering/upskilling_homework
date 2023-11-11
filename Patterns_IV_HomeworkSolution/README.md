# Patterns: Homework 4 Solution

The actual solution depends heavily on the chosen codebase, but here's an example of what you might encounter.
Note: these are just made up examples how to list your findings together with solutions.

## Developer Anti-Patterns

### 1. Code Duplication

#### Identified Anti-Pattern:
In the `Auth.cpp` file, there are identical functions for handling user authentication in both the `Admin` and `User` modules.

#### Potential Solution:
Create a shared authentication module that both `Admin` and `User` modules can import and utilize.

### 2. Excessive Global State

#### Identified Anti-Pattern:
The application relies heavily on global variables to store user data, resulting in potential conflicts and difficulties in tracking state changes.

#### Potential Solution:
Implement a state management solution to encapsulate and manage application state in a more controlled manner.

## Architectural Anti-Patterns

### 1. Long and Complex Methods

#### Identified Anti-Pattern:
The `processOrder` method in the `OrderProcessor` class spans over 200 lines, making it hard to understand and maintain.

#### Potential Solution:
Refactor the `processOrder` method into smaller, focused methods that handle specific aspects of the order processing logic.

### 1. Tight Coupling Between Components

#### Identified Anti-Pattern:
The `PaymentProcessor` class has direct dependencies on specific database implementations, leading to tight coupling.

#### Potential Solution:
Implement dependency injection or an abstraction layer to decouple the `PaymentProcessor` from specific database implementations, enhancing flexibility and maintainability.