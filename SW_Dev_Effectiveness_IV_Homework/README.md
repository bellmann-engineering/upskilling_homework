# Software Development Effectiveness: Homework 4

## Recap

In the last session, we learned about TDD and how to write good unit tests during development. 
In this homework we want to focus on using the AAA-Pattern (Arrange, Act and Assert) to write easy to read and maintainable tests.

Make sure you write only code that is covered by a testcase.

## Your Tasks

# Exercise: AAA-Pattern and Unit Testing for an E-Commerce Shopping Cart

## Objective

Practice the AAA pattern and unit testing in C++ by creating a class for an e-commerce shopping cart and writing unit tests to ensure its functionality.

## Instructions

### Create a C++ Class

Design and implement a C++ class called `ShoppingCart` that represents a shopping cart for an e-commerce website. The `ShoppingCart` class should have the following features:
- Add items to the cart.
- Remove items from the cart.
- Calculate the total price of items in the cart.
- Apply discounts to items in the cart.

The class should have appropriate member functions, data members, and any other necessary components.

### Write Unit Tests

Create a set of unit tests for the `ShoppingCart` class using the Google Test framework. Write test cases to cover the following scenarios and functionalities:
- Add items to the cart and verify that they are correctly added.
- Remove items from the cart and confirm that they are removed.
- Calculate the total price of items in the cart and ensure it's accurate.
- Apply discounts to items in the cart and validate the discounted prices.
- Test edge cases, such as trying to remove items that are not in the cart, applying discounts to an empty cart, etc.

### Follow the AAA Pattern

For each unit test, follow the Arrange, Act, Assert (AAA) pattern:
- **Arrange:** Set up the initial conditions, create an instance of the `ShoppingCart`, and add items if needed.
- **Act:** Perform the action being tested, such as adding items, removing items, calculating prices, or applying discounts.
- **Assert:** Use appropriate assertions (e.g., `EXPECT_EQ`, `EXPECT_TRUE`, etc.) to verify the correctness of the results.

### Compile and Run Tests

Ensure that you have the Google Test framework properly set up in your project. Compile and run the tests to validate the functionality of the `ShoppingCart` class.

**Challenge:** If you want to add an extra challenge, you can implement features like applying different types of discounts (e.g., percentage-based, fixed amount), handling multiple quantities of the same item, or applying shipping costs to the total.
