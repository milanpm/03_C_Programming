/*
===============================================================================
File: age_validation_test.c
Project: 03_C_Programming
Day: 20
Topic: Unit testing and boundary value checks
Description:
    Validate the allowed age range using a simple unit test runner.
Learning Objectives:
    Compare expected and actual results.
    Test normal, boundary, and invalid values.
    Return a failure exit status when any test fails.
Author: Alex
Created Date: 2026-10-07
Last Modified: 2026-10-16
===============================================================================
*/

#include <stdio.h>
#include <stdlib.h>

static int tests_run = 0;
static int tests_failed = 0;

/* Exercise rule: valid ages range from 0 to 150, inclusive. */
int is_valid_age(int age)
{
    return age >= 0 && age <= 150;
}

void check_int(const char *name, int expected, int actual)
{
    ++tests_run;

    if (expected == actual) {
        printf("[PASS] %s\n", name);
    } else {
        ++tests_failed;

        printf("[FAIL] %s: expected=%d, actual=%d\n",
               name, expected, actual);
    }
}

int main(void)
{
    check_int("Normal age: 35", 1, is_valid_age(35));
    check_int("Minimum age: 0", 1, is_valid_age(0));
    check_int("Maximum age: 150", 1, is_valid_age(150));
    check_int("Below minimum: -1", 0, is_valid_age(-1));
    check_int("Above maximum: 151", 0, is_valid_age(151));

    printf("\nTests: %d, Passed: %d, Failed: %d\n",
           tests_run,
           tests_run - tests_failed,
           tests_failed);

    return tests_failed == 0 ? EXIT_SUCCESS : EXIT_FAILURE;
}
