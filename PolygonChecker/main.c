#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "main.h"
#include "triangleSolver.h"
#include <string.h>

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
			RECTANGLE rect = getRectanglePoints();
			RECTANGLESIDES siderect = analyzeRectangle(rect);
			char* isrect = isItaRectangle(siderect);
			printf("%s\n", isrect);
			break;

		case 1:
			printf_s("Triangle selected.\n");
			int triangleSides[3] = { 0, 0, 0 };
			int* triangleSidesPtr = getTriangleSides(triangleSides);
			//printf_s("! %d\n", triangleSidesPtr[0]);
			float angle1, angle2, angle3;
			isItaTriangleAngles(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2], &angle1, &angle2, &angle3);
			char* result = analyzeTriangle(triangleSidesPtr[0], triangleSidesPtr[1], triangleSidesPtr[2]);
			printf_s("%s\n", result);
			break;
		case 0:
			continueProgram = false;
			printf("Thank you for using the Polygon Checker!");
			exit(EXIT_FAILURE);
			break;
		default:
			printf_s("Invalid value entered.\n");
			exit(EXIT_FAILURE);
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

}

// Katarina added the comments and the function body for rectangleSides
RECTANGLE getRectanglePoints(void) {
	printf_s("Enter 4 sets of points for the rectangle\n");
	// Katarina added the variable declarations and points scaned
	RECTANGLE outputedrectangle;

	//points using the struct POINTS
	POINTS point1;
	POINTS point2;
	POINTS point3;
	POINTS point4;

	// Katarina added the points for the user to enter 
	
	printf("Enter the first point (x1, y1)\n");
	scanf_s("%lf%lf", &point1.x, &point1.y);

	printf("Enter the second point (x2, y2)\n");
	scanf_s("%lf%lf", &point2.x, &point2.y);

	printf("Enter the third point (x3, y3)\n");
	scanf_s("%lf%lf", &point3.x, &point3.y);

	printf("Enter the final point (x4, y4)\n");
	scanf_s("%lf%lf", &point4.x, &point4.y);

	//assigns the points to the struct RECTANGLE varible 
	outputedrectangle.point1 = point1;
	outputedrectangle.point2 = point2;
	outputedrectangle.point3 = point3;
	outputedrectangle.point4 = point4;

	return outputedrectangle;
	

}

