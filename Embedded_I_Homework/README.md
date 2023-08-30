# Embedded: Homework 1

## C Programming Practice Tasks

In the previous session we learned about Input, Output, Logic and control structures. We discussed how these structures enable us to control the flow of a program's execution based on conditions and decisions. We explored concepts like if statements and switch statements, which are crucial for creating programs that can make intelligent decisions and perform repetitive tasks efficiently.

This homework will provide you with the opportunity to apply what you've learned about Console In- and Output as well as Logic and Control Structures in practical coding scenarios. 

In the following tasks, you will write C programs to implement various functionalities. These exercises will help you deepen your programming skills in C.

## Console Input and Output

**Task 1: Temperature Conversion**

Write a C program that can convert temperatures between Celsius and Fahrenheit. The user first selects the desired conversion unit:

Choose:
<blockquote>a) Celsius -> Fahrenheit
  
b) Fahrenheit -> Celsius
</blockquote>

Use the following formulas for conversion:
- °C = (°F - 32) * 5/9 (from Fahrenheit to Celsius)
- °F = °C * 1.8 + 32 (from Celsius to Fahrenheit)

**Task 2: Calculate Age**

Create a C program that asks the user for their first name, last name, and year of birth. The program outputs the full name along with the age in parentheses. The year 2023 is fixed as the current year.

Example input:
<blockquote>
First name: Max<br>
Last name: Mustermann<br>
Year of birth: 1990<br>
</blockquote>

Output:
<blockquote>Max Mustermann (33 years old)</blockquote>
<br>

**Task 3: Square Root Calculation**

Write a C program that can calculate square roots of numbers. Use the `sqrt` function from the `math.h` library. The user inputs a number, and the program outputs its square root.

**Task 4: Electricity Cost Calculator**

Develop an electricity cost calculator. The user inputs the daily consumption in kWh and the electricity price per kWh. The program calculates the annual consumption and costs and displays them.

**Task 5: Number System Converter**

Write a C program that can convert decimal numbers to octal (base 8) and hexadecimal (base 16). The user inputs a decimal number, and the program outputs its equivalent octal and hexadecimal representations.

**Hint:** Check out printf's number formaters before you start actually converting from one system to the other: https://cplusplus.com/reference/cstdio/printf/

Example:

Input:
<blockquote>Number to convert: 26</blockquote>

Output:
<blockquote>Octal: 32
Hexadecimal: 1A</blockquote>
