# C Programming

A hands-on C programming learning project from fundamentals to practical software development.

## Learning Goals

- Understand C syntax and program structure
- Learn variables, data types, operators, and control flow
- Understand functions, arrays, and strings
- Master pointers and memory management
- Learn structures and file I/O
- Build practical C programs
- Prepare for C++ programming

## Progress

### Day 1 - Hello C

- Set up the GCC development environment
- Created the first C program
- Learned the basic structure of a C program
- Used `printf()` for console output
- Compiled C source code with GCC
- Executed the compiled program
- Experienced and fixed a compiler error
- Learned the difference between source code and executable files

### Day 2 - Variables and Data Types

- Declared and initialized variables
- Used `int`, `float`, `double`, and `char`
- Printed variable values with `printf()`
- Used `%d`, `%f`, `%c`, and `%zu` format specifiers
- Controlled decimal output with `%.1f`
- Changed variable values using assignment
- Declared a constant with `const`
- Measured data type sizes with `sizeof()`
- Learned the difference between characters and strings
- Learned that `sizeof()` returns a size in bytes

### Day 3 - Operators and User Input

- Used arithmetic operators: `+`, `-`, `*`, `/`, and `%`
- Learned the difference between integer and floating-point division
- Converted an integer to `double` using explicit type casting
- Used compound assignment operators
- Used increment and decrement operators
- Learned the difference between postfix and prefix increment
- Received user input with `scanf()`
- Used relational and logical operators
- Learned that comparison results are represented as `0` or `1`
- Learned operator precedence and the importance of parentheses

### Day 4 - Conditional Statements and Safe Division

- Used `if`, `else if`, and `else` statements
- Created multiple decision branches based on user input
- Assigned letter grades according to score ranges
- Validated that a score was between 0 and 100
- Used the logical OR operator `||` for range validation
- Checked the return value of `scanf()` to detect invalid input
- Used `double` values for floating-point division
- Prevented division by zero before performing a calculation
- Used `return 1` to indicate an input or calculation error
- Used `return 0` to indicate successful program completion
- Added file information and program descriptions using comments

### Day 5 - Loops and Repeated Input

- Used `for`, `while`, and `do-while` loops
- Learned when to use each type of loop
- Used loop variables and increment operations
- Confirmed that `do-while` executes at least once
- Used `break` to terminate a loop immediately
- Used `continue` to skip the current iteration
- Prevented infinite loops by updating loop conditions
- Repeated user input using `do-while`
- Validated numeric input using the return value of `scanf()`
- Validated that input was within an allowed range
- Cleared invalid characters from the input buffer
- Added file information and program descriptions using comments

### Day 6 - Functions, Parameters, and Return Values

- Learned why functions are used to organize and reuse code
- Declared functions using function prototypes
- Defined and called custom functions
- Learned the difference between parameters and arguments
- Created functions with and without parameters
- Created functions with and without return values
- Used `return` to send calculation results to the caller
- Confirmed that `return` immediately terminates a function
- Passed strings and integers to functions
- Separated input, calculation, validation, and output responsibilities
- Returned success or failure status from a function
- Used output parameters to return calculated values
- Prevented division by zero inside a calculation function
- Verified program exit status with `echo $?`

### Day 7 - Arrays

- Declared and initialized integer arrays
- Learned that array indexing starts at zero
- Accessed individual elements using array indexes
- Traversed arrays using `for` loops
- Calculated the number of elements using `sizeof`
- Calculated the total and average of array values
- Passed arrays and their lengths to functions
- Used `const` to prevent functions from modifying arrays
- Created functions to print arrays and calculate totals
- Found maximum and minimum values in an array
- Initialized maximum and minimum values safely from the first element

## Examples

```text
examples/
├── 01_Basics/
│   └── hello.c
├── 02_Variables_Data_Types/
│   └── variables.c
├── 03_Operators_User_Input/
│   ├── operators.c
│   ├── user_input.c
│   └── comparison_operators.c
├── 04_Conditional_Statements/
│   ├── conditionals.c
│   └── safe_division.c
├── 05_Loops/
│   ├── loops.c
│   └── input_loop.c
├── 06_Functions/
│   ├── functions.c
│   └── function_calculator.c
└── 07_Arrays/
    ├── arrays.c
    └── array_functions.c

```

## Next Step

Day 8 will cover strings, character arrays, string input, and standard string functions.
