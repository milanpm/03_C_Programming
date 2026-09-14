/*
 * File: file_read.c
 * Description: 환자 정보 파일을 한 줄씩 읽어 화면에 출력합니다.
 * Author: Alex
 * Date: 2026-09-14
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char line[256];
    FILE *file = fopen("patients.txt", "r");

    if (file == NULL)
    {
        perror("Failed to open patients.txt");
        return EXIT_FAILURE;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    if (ferror(file))
    {
        fprintf(stderr, "Failed to read patients.txt.\n");
        fclose(file);
        return EXIT_FAILURE;
    }

    if (fclose(file) == EOF)
    {
        perror("Failed to close patients.txt");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
