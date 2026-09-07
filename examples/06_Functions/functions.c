/*
 * File: functions.c
 * Description: Demonstrates function prototypes, parameters,
 *              arguments, and return values in C.
 * Author: Alex
 * Date: 2026-09-07
 */

#include <stdio.h>

// Function prototypes
void print_separator(void);
void greet(const char name[]);
int add(int a, int b);
int max(int a, int b);

int main(void)
{
    int first = 5;
    int second = 17;
    int sum;
    int larger;

    print_separator();
    greet("Alex");

    sum = add(first, second);
    larger = max(first, second);

    printf("%d + %d = %d\n", first, second, sum);
    printf("The larger number is %d.\n", larger);

    print_separator();

    return 0;
}

void print_separator(void)
{
    printf("==============================\n");
}

void greet(const char name[])
{
    printf("Hello, %s!\n", name);
}

int add(int a, int b)
{
    return a + b;
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}
