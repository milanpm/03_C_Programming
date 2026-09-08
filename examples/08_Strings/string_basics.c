/*
 * C Programming Day 8
 * Topic: Strings and Character Arrays
 * File: string_basics.c
 * Description:
 *     Demonstrates character arrays, null termination,
 *     string length, and array size.
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[] = "Alex";
    char language[] = {'C', '\0'};

    printf("Name: %s\n", name);
    printf("Language: %s\n", language);

    printf("First character: %c\n", name[0]);
    printf("Second character: %c\n", name[1]);

    printf("\nString information\n");
    printf("strlen(name): %zu\n", strlen(name));
    printf("sizeof(name): %zu\n", sizeof(name));

    printf("strlen(language): %zu\n", strlen(language));
    printf("sizeof(language): %zu\n", sizeof(language));

    return 0;
}
