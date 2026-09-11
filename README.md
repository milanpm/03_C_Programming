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

### Day 8 - Strings and Character Arrays

- Learned that C strings are arrays of `char`
- Learned that strings end with the null character `'\0'`
- Compared visible string length with actual array size
- Used `strlen()` to calculate string length
- Used `sizeof` to determine the size of a character array
- Read strings containing spaces safely using `fgets()`
- Removed the trailing newline using `strcspn()`
- Compared strings using `strcmp()`
- Copied strings using `strcpy()`
- Concatenated strings using `strcat()`
- Learned about `snprintf()` as a size-limited formatting alternative
- Passed strings to functions using `const char[]`
- Traversed strings until the null character was reached
- Used `tolower()` and `isdigit()` from `<ctype.h>`
- Created a program that analyzes characters, spaces, vowels, and digits

### Day 9 - Pointer Basics

- Learned that variables are stored at memory addresses
- Used the address-of operator (`&`) to obtain variable addresses
- Printed memory addresses using `%p` and `(void *)`
- Declared and initialized pointer variables
- Used the dereference operator (`*`) to access pointed-to values
- Modified original variable values through pointers
- Passed variable addresses to functions
- Swapped two original values using pointer parameters
- Returned multiple calculation results through output parameters
- Learned the relationship between arrays and pointers
- Accessed array elements using pointer arithmetic
- Initialized pointers safely using `NULL`
- Checked pointer validity before dereferencing

### Day 10 - Structures

- Defined custom data types using `struct`
- Declared and initialized structure variables
- Used designated initializers for readable initialization
- Accessed structure members using the dot operator (`.`)
- Passed structures to functions by value
- Returned structures from functions
- Used structure pointers to avoid unnecessary copying
- Accessed members through pointers using the arrow operator (`->`)
- Modified original structures through pointer parameters
- Added `const` protection to read-only structure pointers
- Stored and processed multiple records using structure arrays
- Calculated the number of structure elements using `sizeof`
- Created concise type names using `typedef`
- Safely modified character array members using `snprintf()`
- Implemented patient registration and ID-based search
- Checked duplicate IDs, invalid pointers, and array capacity

### Day 11 - Dynamic Memory Allocation

- Learned the difference between static and dynamic memory allocation
- Allocated memory at runtime using `malloc()`
- Allocated zero-initialized memory using `calloc()`
- Checked allocation results against `NULL`
- Resized existing memory blocks using `realloc()`
- Used a temporary pointer to handle `realloc()` safely
- Released dynamically allocated memory using `free()`
- Set pointers to `NULL` after releasing memory
- Created dynamically allocated integer arrays
- Created dynamically allocated structure arrays
- Combined structures, pointers, and dynamic memory
- Used a double pointer to update a caller-owned pointer
- Built a dynamic patient manager that grows as records are added

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
├── 07_Arrays/
│   ├── arrays.c
│   └── array_functions.c
├── 08_Strings/
│   ├── string_basics.c
│   ├── string_input.c
│   ├── string_compare.c
│   ├── string_functions.c
│   ├── string_helpers.c
│   └── string_analyzer.c
├── 09_Pointers/
│   ├── memory_address.c
│   ├── pointer_basics.c
│   ├── pointer_modify.c
│   ├── pointer_swap.c
│   ├── pointer_analyzer.c
│   ├── array_pointers.c
│   └── pointer_safety.c
├── 10_Structures/
│   ├── structure_basics.c
│   ├── structure_initialization.c
│   ├── structure_functions.c
│   ├── structure_pointer.c
│   ├── structure_array.c
│   ├── typedef_structure.c
│   └── patient_manager.c
└── 11_Dynamic_Memory/
    ├── malloc_basics.c
    ├── calloc_basics.c
    ├── realloc_basics.c
    ├── dynamic_patients.c
    └── dynamic_patient_manager.c
```

## Next Step

Day 12 will cover file input and output using `fopen()`, `fprintf()`, `fgets()`, `fclose()`, and CSV-based patient records.
