#include <stdio.h>
#include <stdbool.h>

#include "main.h"
#include "triangleSolver.h"

// Katarina added the rectangleSolver.h include
#include "rectangleSolver.h"

int side = 0;

int main() {
	// add input validation to be sure that if a character is entered it won't accept it
	bool continueProgram = true;
	while (continueProgram) {
		printWelcome();

		int shapeChoice = printShapeMenu();

		switch (shapeChoice)
		{
		// Sadiya added the option for the rectangle in the switch case and added the correct functions 
		case 2:
			printf_s("Rectangle selected.\n");
			int rectanglePoints[4] = { 0, 0, 0, 0 };
			int* rectanglePointsPtr = getRectanglePoints(rectanglePoints);
			char* results = analyzeRectangle(rectanglePointsPtr[0], rectanglePointsPtr[1], rectanglePointsPtr[2], rectanglePointsPtr[3]);
			printf_s("%s\n", results);
			break;

		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;
		case 0:
			continueProgram = false;
			break;
		default:
			printf_s("Invalid value entered.\n");
			break;
		}
	}
	return 0;
}

void printWelcome() {
	printf_s("\n");
	printf_s(" **********************\n");
	printf_s("**     Welcome to     **\n");
	printf_s("**   Polygon Checker  **\n");
	printf_s(" **********************\n");
}

int printShapeMenu() {
	// Sadiya added the option for Rectangle in the menu
	printf_s("2. Rectangle\n");
	printf_s("1. Triangle\n");
	printf_s("0. Exit\n");

	int shapeChoice;
	// add input validation here to be sure that if a character is entered the program won't break (Joshua)
	printf_s("Enter number: ");
	scanf_s("%1o", &shapeChoice);

	return shapeChoice;
}

int* getTriangleSides(int* triangleSides) {
	printf_s("Enter the three sides of the triangle: ");
	for (int i = 0; i < 3; i++)
	{
		scanf_s("%d", &triangleSides[i]);
	}
	return triangleSides;

}// Katarina added the comments and the function body for rectangleSides
int* getRectanglePoints(int* rectanglePoints) {
	printf_s("Enter 4 sets of points for the rectangle");
	// Sadiya added a structure to hold the points and assign them 
struct points {
		int x;
		int y;
	};

	// get the sides to form the rectangle in pairs (x and y) 
	// ex. x1 and y1, x2 and y2, x3 and y3, x4 and y4
	// this can be done in a for loop or individually 
}