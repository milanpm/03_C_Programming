/*
 * C Programming Day 8
 * Topic: String Analyzer
 * File: string_analyzer.c
 * Description:
 *     Reads a line of text and counts its characters,
 *     spaces, vowels, and digits.
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

size_t count_spaces(const char text[]);
size_t count_vowels(const char text[]);
size_t count_digits(const char text[]);

int main(void)
{
    char text[100];

    printf("Enter text: ");

    if (fgets(text, sizeof(text), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    text[strcspn(text, "\n")] = '\0';

    printf("\nString analysis\n");
    printf("Text: %s\n", text);
    printf("Characters: %zu\n", strlen(text));
    printf("Spaces: %zu\n", count_spaces(text));
    printf("Vowels: %zu\n", count_vowels(text));
    printf("Digits: %zu\n", count_digits(text));

    return 0;
}

size_t count_spaces(const char text[])
{
    size_t count = 0;
    size_t index;

    for (index = 0; text[index] != '\0'; index++)
    {
        if (text[index] == ' ')
        {
            count++;
        }
    }

    return count;
}

size_t count_vowels(const char text[])
{
    size_t count = 0;
    size_t index;

    for (index = 0; text[index] != '\0'; index++)
    {
        char character = (char)tolower((unsigned char)text[index]);

        if (character == 'a' ||
            character == 'e' ||
            character == 'i' ||
            character == 'o' ||
            character == 'u')
        {
            count++;
        }
    }

    return count;
}

size_t count_digits(const char text[])
{
    size_t count = 0;
    size_t index;

    for (index = 0; text[index] != '\0'; index++)
    {
        if (isdigit((unsigned char)text[index]))
        {
            count++;
        }
    }

    return count;
}
