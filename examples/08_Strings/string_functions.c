/*
 * C Programming Day 8
 * Topic: String Functions
 * File: string_functions.c
 * Description:
 *     Demonstrates copying and concatenating strings
 *     using strcpy() and strcat().
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[] = "Alex";
    char last_name[] = "Kim";
    char full_name[50];

    strcpy(full_name, first_name);
    strcat(full_name, " ");
    strcat(full_name, last_name);

    printf("First name: %s\n", first_name);
    printf("Last name: %s\n", last_name);
    printf("Full name: %s\n", full_name);
    printf("Full name length: %zu\n", strlen(full_name));

    return 0;
}
