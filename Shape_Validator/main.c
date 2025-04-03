#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "input_validation.h"


int main(void)
{
    int choice;

    while (1)
    {
        printf("====================================\n");
        printf("||   SHAPE VALIDATOR MENU        ||\n");
        printf("************************************\n");
        printf("||  1. Validate Triangle         ||\n");
        printf("||  2. Validate Rectangle        ||\n");
        printf("||  3. Exit Program              ||\n");
        printf("====================================\n\n");
        printf("Enter your choice (1-3): ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\n************************************\n");
            printf("**  Invalid input! Numbers only!  **\n");
            printf("************************************\n");
            while (getchar() != '\n');
            continue;
        }

        while (getchar() != '\n');

        switch (choice)
        {
        case 1:
            printf("====================================\n");
            printf("||       TRIANGLE VALIDATION      ||\n");
            printf("************************************\n");

            get_triangle_sides();
            break;

        case 2:
            printf("====================================\n");
            printf("||       RECTANGLE VALIDATION     ||\n");
            printf("************************************\n");
            get_rectangle_input();
            break;

        case 3:
            printf("====================================\n");
            printf("||         Exiting Program        ||\n");
            printf("************************************\n");

            printf("\n####################################\n");
            printf("###      Thank you for using     ###\n");
            printf("###      Shape Validator!        ###\n");
            printf("####################################\n");

            return 0;

        default:
            printf("\n************************************\n");
            printf("**  Invalid choice! (1-3 only)    **\n");
            printf("************************************\n");
        }
    }
}