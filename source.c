#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void get_triangle_input() {
    
    double side1, side2, side3;
            
    // FISRT SIDE USER INPUT
    printf("Please Enter The First Side In CentiMetres\n");
        // First Input Validation
    int ScanReturn1 =  scanf("%lf", &side1);
            // Validate First Input
    if (ScanReturn1 != 1 ) {

        printf("Please Enter A Valid Numerical Value\n");
        EXIT_FAILURE;

        }

    // Second Side user input
    printf("Please Enter The Second Side In CentiMetres\n");
        // Second Input Validation
   int ScanReturn2 = scanf("%lf", &side2);


    // Third Side User input
    printf("Please Enter The Third Side In CentiMetres\n");
        // Third Side Validation
    int ScanReturn3 = scanf("%lf", &side3);

}

void get_rectangle_input() {

}

int main() {
    int choice;
    while (1) {
        printf("\nMenu:\n1. Triangle Feature\n2. Rectangle Feature\n3. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        if (choice == 1) {
            get_triangle_input();
        }
        else if (choice == 2) {
            get_rectangle_input();
        }
        else if (choice == 3) {
            break;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
