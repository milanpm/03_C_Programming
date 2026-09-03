/*
 * File Name    : input_loop.c
 * Author       : Alex
 * Created Date : 2026-09-03
 * Description  : Demonstrates repeated user input, input validation,
 *                and controlled loop termination using do-while.
 */

#include <stdio.h>

void clear_input_buffer(void)
{
    int character;

    while ((character = getchar()) != '\n' && character != EOF)
    {
        /* Discard the remaining characters. */
    }
}

int main(void)
{
    int number;

    do
    {
        printf("Enter a number from 1 to 5 (0 to quit): ");

        int input_result = scanf("%d", &number);

        clear_input_buffer();

        if (input_result != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            continue;
        }

        if (number == 0)
        {
            printf("Program terminated.\n");
            break;
        }

        if (number < 1 || number > 5)
        {
            printf("Invalid range. Please try again.\n");
            continue;
        }

        printf("You entered: %d\n", number);
    }
    while (number != 0);

    return 0;
}
