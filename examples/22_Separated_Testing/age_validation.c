/*
===============================================================================
File: age_validation.c
Project: 03_C_Programming
Day: 22
Topic: Separating validation logic and test code
Description:
    Implement the age validation function.
Learning Objectives:
    Separate function implementation from test code.
    Include the public header in its implementation file.
Author: Alex
Created Date: 2026-10-25
Last Modified: 2026-10-26
===============================================================================
*/

#include "age_validation.h"

int is_valid_age(int age)
{
    return age >= 0 && age <= 150;
}
