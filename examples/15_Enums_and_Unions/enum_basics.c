/*
 * File: enum_basics.c
 * Description: Demonstrates the basic declaration and use of an enum in C.
 * Author: Alex
 * Date: 2026-09-18
 *
 * Learning objectives:
 * - Declare an enumeration type.
 * - Understand automatically assigned integer values.
 * - Declare and initialize an enum variable.
 * - Compare enum values in a conditional statement.
 */

#include <stdio.h>

enum Weekday
{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void)
{
    enum Weekday today = WEDNESDAY;

    printf("SUNDAY    = %d\n", SUNDAY);
    printf("MONDAY    = %d\n", MONDAY);
    printf("TUESDAY   = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY  = %d\n", THURSDAY);
    printf("FRIDAY    = %d\n", FRIDAY);
    printf("SATURDAY  = %d\n", SATURDAY);

    printf("\nToday value: %d\n", today);

    if (today == WEDNESDAY)
    {
        printf("Today is Wednesday.\n");
    }

    return 0;
}
