#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void get_triangle_input() {
<<<<<<< HEAD
=======
// VARIABLE DECLARATION FOR USER INPUT
    double side1, side2, side3;
     
	// FIRST SIDE USER INPUT
    do {
        printf("Please Enter the first side: ");
        ScanReturn1 = scanf("%lf", &side1);

        while (getchar() != '\n');  // CLEARING INPUT BUFFER

    } 
    
    while (ScanReturn1 != 1 || side1 <= 0);

    // SECOND SIDE USER INPUT
    do {
        printf("Please Enter the second side: ");
        ScanReturn2 = scanf("%lf", &side2);

		while (getchar() != '\n');  // CLEARING INPUT BUFFER

    } 
    while (ScanReturn2 != 1 || side2 <= 0);

    // THIRD SIDE USER INPUT
    do {
        printf("Please Enter the third side: ");
        ScanReturn3 = scanf("%lf", &side3);

		while (getchar() != '\n');  //  CLEARING INPUT BUFFER

    } 
    while (ScanReturn3 != 1 || side3 <= 0);

    // Triangle Validity Check
	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) { // INVALID TRIANGLE VALIDITY CHECK

        printf("Invalid triangle sides. Please enter again.\n");

		get_triangle_input(); // Restart THE FUNCTION

        return;
    }

	printf("Valid Triangle Entered: %.2f, %.2f, %.2f\n", side1, side2, side3); // PRINTING VALID TRIANGLE SIDES
}
>>>>>>> dc5b7befa51fd18f71ff3a9221f7a55fd073482f

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
