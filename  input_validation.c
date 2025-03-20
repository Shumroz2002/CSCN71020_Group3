#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// Function to get a positive number from the user
double get_positive_number(const char* prompt)
{
    double number;
    int result;

    while (1) // Keep asking until a valid input is given
    {
        printf("%s", prompt); 

        result = scanf("%lf", &number); 

        // Clear the input buffer
        while (getchar() != '\n');

        // Check if the input is valid and positive
        if (result == 1 && number > 0)
        {
            return number; // Return the valid number
        }
        else
        {
            printf("Invalid input. Please enter a positive number.\n");
        }
    }
}

// Function to get and validate triangle sides
void get_triangle_sides()
{
    double side1, side2, side3;

    printf("\n--- Triangle Input ---\n");

    // Get the three sides of the triangle
	side1 = get_positive_number("Enter the first side: "); // FIRST SIDE USER INPUT
	side2 = get_positive_number("Enter the second side: "); // SECOND SIDE USER INPUT
	side3 = get_positive_number("Enter the third side: "); // THIRD SIDE USER INPUT

    // Check if the sides can form a valid triangle
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("Valid Triangle Entered: %.2f, %.2f, %.2f\n", side1, side2, side3);
    }
    else
    {
        printf("Invalid triangle sides. Please try again.\n");
        get_triangle_sides(); // Ask for input again if invalid
    }
}

//*****************************************************************************************************************

// Function to get and validate rectangle points

void get_rectangle_points()
{
    double x[4] = { 0.0 }, y[4] = { 0.0 }; 

    printf("\n--- Rectangle Input ---\n");

    printf("Point 1:\n");
    x[0] = get_positive_number("Enter x coordinate: "); // X coordinate for point 1
    y[0] = get_positive_number("Enter y coordinate: "); // Y coordinate for point 1

    printf("Point 2:\n");
    x[1] = get_positive_number("Enter x coordinate: "); // X coordinate for point 2
    y[1] = get_positive_number("Enter y coordinate: "); // Y coordinate for point 2

    printf("Point 3:\n");
    x[2] = get_positive_number("Enter x coordinate: "); // X coordinate for point 3
    y[2] = get_positive_number("Enter y coordinate: "); // Y coordinate for point 3

    printf("Point 4:\n");
    x[3] = get_positive_number("Enter x coordinate: "); // X coordinate for point 4
    y[3] = get_positive_number("Enter y coordinate: "); // Y coordinate for point 4

    printf("Valid rectangle points entered!\n");
}
}

int main()
{
    // Example usage of the functions
    get_triangle_sides(); // Get triangle sides
    get_rectangle_points(); // Get rectangle points

    return 0;
}