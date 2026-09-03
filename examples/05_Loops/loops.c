/*
 * File Name    : loops.c
 * Author       : Alex
 * Created Date : 2026-09-03
 * Description  : Demonstrates the basic operation of for, while
 *                and do-while loops in C.
 */

 #include <stdio.h>

 int main(void)
 {
    printf("=== for Loop ===\n");

    for(int i = 1; i<= 5; i++)
    {
      printf("%d\n", i);
    }

    printf("\n=== while Loop ===\n");

    int count = 1;

    while (count <= 5)
    {
        printf("%d\n", count);
        count++;
    }

    printf("\n=== do-while Loop ===\n");

    int number = 1;

    do
    {
        printf("%d\n", number);
        number++;
    }
    while (number <= 5);

    printf("\n=== do-while Runs at Least Once ===\n");

    int test_value = 10;

    do
    {
        printf("test_value = %d\n", test_value);
        test_value++;
    }
    while (test_value <= 5);

    printf("\n=== break Statement ===\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i == 6)
        {
            printf("Loop stopped before printing 6.\n");
            break;
        }

        printf("%d\n", i);
    }

    printf("\n=== continue Statement ===\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        printf("%d\n", i);
    }

    return 0;
 }
