#include <stdio.h>

int main(void)
{
  int age = 50;
  float height = 180.0f;
  double temperature = 36.5;
  char grade = 'S';
  const int birth_year = 1976;

  printf("Age: %d\n", age);
  printf("Height: %.1f cm\n", height);
  printf("Temperature: %.1f C\n", temperature);
  printf("Grade: %c\n", grade);
  printf("Birth Year: %d\n", birth_year);
  printf("\n--- Updated Values ---\n");

  age = 51;
  height = 176.2f;
  temperature = 36.8;
  grade = 'B';

  printf("Age: %d\n", age);
  printf("Height: %.1f cm\n", height);
  printf("Temperature: %.1f C\n", temperature);
  printf("Grade: %c\n", grade);

  printf("\n--- Data Type Sizes ---\n");

  printf("Size of int: %zu bytes\n", sizeof(int));
  printf("Size of float: %zu bytes\n", sizeof(float));
  printf("Size of double: %zu bytes\n", sizeof(double));
  printf("Size of char: %zu byte\n", sizeof(char));

  return 0;
}