#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
#include "../Shape_Validator/input_validation.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestCases
{
	TEST_CLASS(UnitTestCases)
	{
	public:

		// Test Case: Valid Triangle (3, 4, 5) - Right Triangle
		TEST_METHOD(TestValidTriangle)
		{
			// Arrange
			double side1 = 3.0, side2 = 4.0, side3 = 5.0;

			// Act
			int result = validate_triangle(side1, side2, side3);

			// Assert
			Assert::AreEqual(1, result, L"3, 4, 5 should form a valid triangle");
		}

		// Test Case: Invalid Triangle (1, 2, 3) - Fails Triangle Inequality
		TEST_METHOD(TestInvalidTriangle)
		{
			// Arrange
			double side1 = 1.0, side2 = 2.0, side3 = 3.0;

			// Act
			int result = validate_triangle(side1, side2, side3);

			// Assert
			Assert::AreEqual(0, result, L"1, 2, 3 should NOT form a valid triangle");
		}

		// Test Case: Equilateral Triangle (5, 5, 5)
		TEST_METHOD(TestEquilateralTriangle)
		{
			// Arrange
			double side1 = 5.0, side2 = 5.0, side3 = 5.0;

			// Act
			int result = validate_triangle(side1, side2, side3);

			// Assert
			Assert::AreEqual(1, result, L"5, 5, 5 should form an equilateral triangle");
		}

		// Test Case: Rectangle with valid dimensions (Length: 5, Width: 10)
		TEST_METHOD(TestValidRectangle)
		{
			// Arrange
			double length = 5.0, width = 10.0;

			// Act
			int result = validate_rectangle(length, width);

			// Assert
			Assert::AreEqual(1, result, L"5x10 should be a valid rectangle");
		}

		// Test Case: Invalid Rectangle (Negative Values)
		TEST_METHOD(TestInvalidRectangle)
		{
			// Arrange
			double length = -5.0, width = 10.0;

			// Act
			int result = validate_rectangle(length, width);

			// Assert
			Assert::AreEqual(0, result, L"Negative length should NOT form a valid rectangle");
		}

		// Test Case: Square (4, 4)
		TEST_METHOD(TestSquareValidation)
		{
			// Arrange
			double length = 4.0, width = 4.0;

			// Act
			int result = validate_rectangle(length, width);

			// Assert
			Assert::AreEqual(1, result, L"A square should still be a valid rectangle");
		}
	};
}
