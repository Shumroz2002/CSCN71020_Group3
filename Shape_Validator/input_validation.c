#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include "input_validation.h"

// Triangle validation
// inputvalidation.c

int validate_rectangle(double length, double width) {
    if (length > 0 && width > 0) {
        return 1;  // Valid rectangle
    }
    return 0;  // Invalid rectangle
}


int validate_triangle(double a, double b, double c)
{
    // Check for triangle inequality
    if (a + b > c && a + c > b && b + c > a)
    {
        return 1;  // Valid triangle
    }
    return 0;  // Invalid triangle
}

void get_triangle_sides(void)
{
    double side1, side2, side3;

    printf("\n--- Triangle Input ---\n");
    printf("\n");

    // SIDE 1
    while (1)
    {
        printf("Side 1: ");

        if (scanf("%lf", &side1) != 1 || side1 <= 0)
        {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }

    // SIDE 2
    while (1)
    {
        printf("Side 2: ");

        if (scanf("%lf", &side2) != 1 || side2 <= 0)
        {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }

    // SIDE 3
    while (1) {
        printf("Side 3: ");

        if (scanf("%lf", &side3) != 1 || side3 <= 0)
        {
            printf("Invalid input. Please enter a positive number.\n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }

    while (getchar() != '\n');

    // Validate triangle inequality
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
    {
        printf("\n%.2f, %.2f, %.2f sides are forming a valid triangle.\n", side1, side2, side3);

        // Triangle type
        if (side1 == side2 && side2 == side3)
        {
            printf("Triangle Type: Equilateral Triangle\n");
        }
        else if (side1 == side2 || side2 == side3 || side1 == side3)
        {
            printf("Triangle Type: Isosceles Triangle\n");
        }
        else
        {
            printf("Triangle Type: Scalene Triangle\n");
        }

        // Calculate angles
        double angle_A = acos((side2 * side2 + side3 * side3 - side1 * side1) / (2 * side2 * side3)) * (180.0 / M_PI);
        double angle_B = acos((side1 * side1 + side3 * side3 - side2 * side2) / (2 * side1 * side3)) * (180.0 / M_PI);
        double angle_C = 180.0 - angle_A - angle_B;

        printf("\nAngles of the triangle:\n");
        printf("Angle opposite side %.2f: %.2f\n", side1, angle_A);
        printf("Angle opposite side %.2f: %.2f\n", side2, angle_B);
        printf("Angle opposite side %.2f: %.2f\n", side3, angle_C);

        // Check for right angle
        if (side1 * side1 + side2 * side2 == side3 * side3 ||
            side1 * side1 + side3 * side3 == side2 * side2 ||
            side2 * side2 + side3 * side3 == side1 * side1)
        {
            printf("\nThis is a right-angled triangle.\n");
        }
    }
    else
    {
        printf("\nInvalid triangle sides - these cannot form a triangle.\n");
    }
}

// Distance calculation of coordinates

static double distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

// Rectangle validation

void get_rectangle_input(void)
{
    double x1, y1, x2, y2, x3, y3, x4, y4;

    printf("\n--- Rectangle Input ---\n");
    printf("\n");

    // Point 1: user input validation

    while (1)  // for x1 coordinate
    {
        printf("Point 1: coordinate x: ");

        if (scanf("%lf", &x1) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        break;
    }
    while (1)  // for y1 coordinate
    {
        printf("         coordinate y: ");

        if (scanf("%lf", &y1) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("\n");

    // Point 2 : user input validation

    while (1)  // for x2 coordinate
    {
        printf("Point 2: coordinate x: ");

        if (scanf("%lf", &x2) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        break;
    }
    while (1) // for y2 coordinate
    {
        printf("         coordinate y: ");

        if (scanf("%lf", &y2) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("\n");

    // Point 3 : user input validation

    while (1)  // for x3 coordinate
    {
        printf("Point 3: coordinate x: ");

        if (scanf("%lf", &x3) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        break;
    }
    while (1)  // for y3 coordinate
    {
        printf("         coordinate y: ");

        if (scanf("%lf", &y3) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("\n");

    // Point 4 : user input validation

    while (1)  // for x4 coordinate
    {
        printf("Point 4: coordinate x: ");

        if (scanf("%lf", &x4) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        break;
    }
    while (1)  // for y4 coordinate
    {
        printf("         coordinate y: ");

        if (scanf("%lf", &y4) != 1)
        {
            printf("Invalid input. Please enter a number.\n");

            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("\n");

    // rectangle validation.
    double AB = distance(x1, y1, x2, y2);
    double BC = distance(x2, y2, x3, y3);
    double CD = distance(x3, y3, x4, y4);
    double DA = distance(x4, y4, x1, y1);
    double AC = distance(x1, y1, x3, y3);
    double BD = distance(x2, y2, x4, y4);

    if (AB == CD && BC == DA && AC == BD)
    {
        printf("\nValid rectangle formed with points:\n");
        printf("Point 1: (%.2f, %.2f)\n", x1, y1);
        printf("Point 2: (%.2f, %.2f)\n", x2, y2);
        printf("Point 3: (%.2f, %.2f)\n", x3, y3);
        printf("Point 4: (%.2f, %.2f)\n\n", x4, y4);

        double perimeter = 2 * (AB + BC);
        double area = AB * BC;

        printf("Perimeter: %.2f\n", perimeter);
        printf("Area: %.2f\n", area);

        // Check if it's a square
        if (AB == BC && BC == CD && CD == DA)
        {
            printf("\nThis points are Square :\n");

        }
    }
    else {
        printf("\nThese points do not form a valid rectangle.\n");
    }
}