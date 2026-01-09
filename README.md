# CLI Menu-Driven Calculator

A comprehensive command-line calculator application written in C, featuring a user-friendly menu interface and multiple mathematical operations.

## Features

- **Basic Arithmetic Operations**
  - Addition
  - Subtraction
  - Multiplication
  - Division

- **Advanced Operations**
  - Modulus (remainder calculation)
  - Power (x^y)
  - Square Root
  - Factorial

- **User Interface**
  - Interactive menu-driven interface
  - Continuous operation until exit
  - Clear screen functionality
  - Formatted output display

## Prerequisites

- GCC compiler (or any C compiler)
- Math library support
- Terminal/Command prompt

## Installation

1. Clone or download the repository
2. Navigate to the project directory
3. Compile the program using:

```bash
gcc calculator.c -o calculator -lm
```

**Note:** The `-lm` flag is required to link the math library.

## Usage

1. Run the compiled program:

```bash
./calculator
```

2. Select an operation from the menu by entering the corresponding number
3. Follow the prompts to enter required values
4. View the result
5. Continue with more calculations or exit (option 0)

### Menu Options

```
1.  Addition
2.  Subtraction
3.  Multiplication
4.  Division
5.  Modulus
6.  Power (x^y)
7.  Square Root
8.  Factorial
9.  Clear Screen
0.  Exit
```

## Example

```
Enter your choice: 1
Enter two numbers: 15 25
Result: 15.00 + 25.00 = 40.00

Enter your choice: 8
Enter a non-negative integer: 5
Result: 5! = 120
```

## Error Handling

The calculator includes robust error handling for:
- Division by zero
- Modulus by zero
- Square root of negative numbers
- Factorial of negative numbers
- Invalid menu choices

## Technical Details

- **Language:** C
- **Libraries Used:** `stdio.h`, `stdlib.h`, `math.h`
- **Data Types:** `int`, `double`, `long long`
- **Functions:** Modular design with separate functions for each operation

## Project Structure

```
calculator.c          # Main source code file
README.md            # This file
```

## Future Enhancements

Potential improvements for future versions:
- History of calculations
- Memory functions (store/recall)
- Expression evaluation
- Trigonometric functions
- Logarithmic operations
- Binary/Hexadecimal conversions

## Acknowledgments

Built as a learning project to demonstrate C programming fundamentals and mathematical algorithm implementation.
