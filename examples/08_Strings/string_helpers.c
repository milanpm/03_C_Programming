/*
 * C Programming Day 8
 * Topic: Passing Strings to Functions
 * File: string_helpers.c
 * Description:
 *     Demonstrates passing strings to functions,
 *     counting characters, and printing each character.
 */

#include <stdio.h>
#include <string.h>

void print_string(const char text[]);
void print_characters(const char text[]);
size_t count_characters(const char text[]);

int main(void)
{
    char message[] = "Learn C";

    print_string(message);
    print_characters(message);

    printf("Character count: %zu\n", count_characters(message));

    return 0;
}

void print_string(const char text[])
{
    printf("String: %s\n", text);
}

void print_characters(const char text[])
{
    size_t index;

    printf("Characters:");

    for (index = 0; text[index] != '\0'; index++)
    {
        printf(" [%c]", text[index]);
    }

    printf("\n");
}

size_t count_characters(const char text[])
{
    size_t count = 0;

    while (text[count] != '\0')
    {
        count++;
    }

    return count;
}
