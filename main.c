#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "input_validation.h"

int main()
{
    int choice;
    
    while (1) 
    {
        printf("\nMenu:\n1. Triangle Input\n2. Rectangle Input\n3. Exit\n");

        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) 
        {
            printf("Invalid input. Try again.\n");
            while (getchar() != '\n'); // Clear input buffer
            continue;
        }

        while (getchar() != '\n'); // Clear input buffer

        if (choice == 1)
        {
            get_triangle_input();
        }
        else if (choice == 2)
        {
            get_rectangle_input();
        }
        else if (choice == 3) 
        {
            printf("Exiting the program.\n");
            break;
        }
        else
        {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
