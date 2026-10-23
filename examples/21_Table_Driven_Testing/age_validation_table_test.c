/*
===============================================================================
File: age_validation_table_test.c
Project: 03_C_Programming
Day: 21
Topic: Table-driven testing and boundary value analysis
Description:
    Run age validation tests using a table of inputs and expected results.
Learning Objectives:
    Represent test cases using a structure.
    Execute test cases stored in an array.
    Check values immediately around each boundary.
    Return a failure exit status when any test fails.
Author: Alex
Created Date: 2026-10-23
Last Modified: 2026-10-23
===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    const char *name;
    int age;
    int expected;
} TestCase;

/* Exercise rule: valid ages range from 0 to 150, inclusive. */
int is_valid_age(int age)
{
    return age >= 0 && age <= 150;
}

int main(void)
{
    const TestCase cases[] = {
        {"Normal age: 35",       35, 1},
        {"Below minimum: -1",   -1, 0},
        {"Minimum age: 0",       0, 1},
        {"Above minimum: 1",     1, 1},
        {"Below maximum: 149", 149, 1},
        {"Maximum age: 150",   150, 1},
        {"Above maximum: 151", 151, 0}
    };

    const size_t count = sizeof cases / sizeof cases[0];
    size_t failed = 0;

    for (size_t i = 0; i < count; ++i) {
        const int actual = is_valid_age(cases[i].age);

        if (actual == cases[i].expected) {
            printf("[PASS] %s\n", cases[i].name);
        } else {
            ++failed;

            printf("[FAIL] %s: expected=%d, actual=%d\n",
                   cases[i].name,
                   cases[i].expected,
                   actual);
        }
    }

    printf("\nTests: %zu, Passed: %zu, Failed: %zu\n",
           count,
           count - failed,
           failed);

    return failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
