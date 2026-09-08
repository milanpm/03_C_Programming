/*
 * C Programming Day 8
 * Topic: String Comparison
 * File: string_compare.c
 * Description:
 *     Reads a command safely and compares it with
 *     predefined strings using strcmp().
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char command[20];

    printf("Enter a command (start/stop): ");

    if (fgets(command, sizeof(command), stdin) == NULL)
    {
        printf("Input error.\n");
        return 1;
    }

    command[strcspn(command, "\n")] = '\0';

    if (strcmp(command, "start") == 0)
    {
        printf("System started.\n");
    }
    else if (strcmp(command, "stop") == 0)
    {
        printf("System stopped.\n");
    }
    else
    {
        printf("Unknown command: %s\n", command);
    }

    return 0;
}
