/*
 * File: operators.c
 * Day: C Programming Day 3
 * Description: Demonstrates arithmetic, assignment,
 *              increment, decrement, and type casting in C.
 *
 * Topics:
 * - Arithmetic operators
 * - Integer and floating-point division
 * - Compound assignment operators
 * - Increment and decrement operators
 * - Explicit type casting
 */

#include <stdio.h>

int main(void)
{
  int a = 17;
  int b = 5;

  printf("=== Arithmetic Operators ===\n");
  printf("a = %d, b = %d\n\n", a, b);

  printf("Addition       : %d + %d = %d\n", a, b, a + b);
  printf("Subtraction    : %d - %d = %d\n", a, b, a - b);
  printf("Multiplication : %d * %d = %d\n", a, b, a * b);
  printf("Division       : %d / %d = %d\n", a, b, a / b);
  printf("Remainder      : %d %% %d = %d\n", a, b, a % b);

  printf("\n=== Integer and Floating-Point Division ===\n");
  printf("Integer division       : %d / %d = %d\n", a, b, a / b);
  printf("Floating-point division: %d / %d = %.2f\n", a, b, (double)a / b);

  int value = 10;

  printf("\n=== Assignment Operators ===\n");
  printf("Initial value: %d\n", value);

  value += 5;
  printf("After += 5: %d\n", value);

  value -= 3;
  printf("After -= 3: %d\n", value);

  value *= 2;
  printf("After *= 2: %d\n", value);

  value /= 4;
  printf("After /= 4: %d\n", value);

  value %= 3;
  printf("After %%= 3: %d\n", value);

  int count = 5;

  printf("\n=== Increment and Decrement Operators ===\n");
  printf("Initial count : %d\n", count);

  count++;
  printf("After count++ : %d\n", count);

  count--;
  printf("After count-- : %d\n", count);

  int x = 5;
  int post_result;
  int pre_result;

  post_result = x++;
  printf("Post-increment: result = %d, x = %d\n", post_result, x);

  x = 5;
  pre_result = ++x;
  printf("Pre-increment: result = %d, x = %d\n", pre_result, x);

  int result_without_parentheses;
  int result_with_parentheses;

  result_without_parentheses = 2 + 3 * 4;
  result_with_parentheses = (2 + 3) * 4;

  printf("\n=== Operator Precedence ===\n");
  printf("2 + 3 * 4   = %d\n", result_without_parentheses);
  printf("(2 + 3) * 4 = %d\n", result_with_parentheses);

  return 0;
}
