#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
		result = "Not a triangle";
	}
	else if (side1 == side2 && side1 == side3) {
		result = "Equilateral triangle";
	}
	// Katarina and Sadiya added a third case for isosceles triangle 
	else if ((side1 == side2 && side1 != side3) || 
		(side1 == side3 && side1 != side2) || (side2 == side3 && side2 != side1))
	{
		result = "Isosceles triangle";
	}  
	else {
		result = "Scalene triangle";
	}

	return result;
}

int isItaTriangle(int side1, int side2, int side3) {
	// first calcluate are the sides inputed form a triangle,
	if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2))
	{
		printf("\n This is a Valid Tringle");
		//then find the angles if it is a triangle (Joshua section)

		// program to find the angles

		// to find the largest angle
		double cosX;
		double x;

		x = ((pow(side2, 2) + pow(side3, 2) - pow(side1, 2)) / (2 * side2 * side3));

		cosX = cos (x);

		printf("%lf\n", cosX);

		// finding second angle
		double cosY;
		double y;

		y = ((pow(side1, 2) + pow(side3, 2) - pow(side2, 2)) / (2 * side1 * side3));

		cosY = cos(y);

		printf("%lf\n", cosY);


		// finding last angle
		double Z;

		Z = 180 - cosY - cosX;

		printf("%lf\n", Z);



	}
	else
	{
		printf("\n This is an Invalid Triangle");

	}

	return 0;
}

