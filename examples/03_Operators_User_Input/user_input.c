/*
 * File: user_input.c
 * Day: C Programming Day 3
 * Description: Reads two integers from the user and performs
 *              basic arithmetic calculations.
 *
 * Topics:
 * - User input with scanf()
 * - Variable memory addresses
 * - Arithmetic operations
 * - Integer and floating-point division
 */

#include <stdio.h>

int main(void)
{
  int first_number;
  int second_number;

  printf("Enter two integers: ");
  scanf("%d %d", &first_number, &second_number);

  printf("\n=== Calculation Results ===\n");
  printf("Addition         : %d\n", first_number + second_number);
  printf("Subtraction      : %d\n", first_number - second_number);
  printf("Multiplication   : %d\n", first_number * second_number);
  printf("Integer Division : %d\n", first_number / second_number);
  printf("Real division    : %.2f\n", (double)first_number / second_number);
  printf("Remainder        : %d\n", first_number % second_number);

  return 0;
}
