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
		float A, B, C, R, s, pi, area;

		pi = 3.14;

		s = (side1 + side2 + side3) / 2;

		area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

		R = (side1 * side2 * side3) / (4 * area);

		A = (180 / pi) * asin(side1 / 2 * R);
		printf("The first angle is = %f\n", A);

		B = (180 / pi) * asin(side2 / 2 * R);
		printf("The second angle is = %f\n", B);

		C = (180 / pi) * asin(side3 / 2 * R);
		printf("The third angle is = %f\n", C);
	}
	else
	{
		printf("\n This is an Invalid Triangle");

	}

	return 0;
}
