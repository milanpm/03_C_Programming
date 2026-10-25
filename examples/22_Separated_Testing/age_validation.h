/*
===============================================================================
File: age_validation.h
Project: 03_C_Programming
Day: 22
Topic: Separating validation logic and test code
Description:
    Declare the public age validation function.
Learning Objectives:
    Declare a function in a shared header.
    Prevent repeated inclusion with an include guard.
Author: Alex
Created Date: 2026-10-25
Last Modified: 2026-10-25
===============================================================================
*/

#ifndef AGE_VALIDATION_H
#define AGE_VALIDATION_H

/* Return 1 for ages from 0 to 150 inclusive; otherwise return 0. */
int is_valid_age(int age);

#endif /* AGE_VALIDATION_H */
