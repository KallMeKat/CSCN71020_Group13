#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "triangleSolver.h"

char* analyzeTriangle(int side1, int side2, int side3) {
	char* result = "";
	if (side1 <= 0 || side2 <= 0 || side3 <= 0 ||((side1 + side2 <= side3) || (side2 + side3 <= side1) || (side1 + side3 <= side2))) {
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

void isItaTriangleAngles(int side1, int side2, int side3, float* angle1, float* angle2, float* angle3) {
	// first calcluate are the sides inputed form a triangle,
	if ((side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2))
	{   
		/*printf("\n This is a Valid Tringle");*/
		//then find the angles if it is a triangle (Joshua section)

		// program to find the angles

		// to find the largest angle
		//double cosX;
		//double x;
		//double pi = 3.14;

		//x = ((pow(side2, 2) + pow(side3, 2) - pow(side1, 2)) / (2 * side2 * side3));

		//cosX = acos (x);

		//printf("%lf\n", cosX);

		//// finding second angle
		//double cosY;
		//double y;

		//y =  ((pow(side1, 2) + pow(side3, 2) - pow(side2, 2)) / (2 * side1 * side3));

		//cosY = acos(y);

		//printf("%lf\n", cosY);


		//// finding last angle
		//double Z;

		//Z = 180 - cosY - cosX;

		//printf("%lf\n", Z);
		float semiPerimeter;
		float area;
		float R;
		float pi = acos(-1);
		semiPerimeter = (side1 + side2 + side3) / 2;
		area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter - side3));
		R = (side1 * side2 * side3) / (4 * area);

		*angle1 = (180 / pi) * asin(side1 / (2 * R));
		*angle2 = (180 / pi) * asin(side2 / (2 * R));
		*angle3 = (180 / pi) * asin(side3 / (2 * R));

		printf("Angles: %6.2f %6.2f %6.2f\n", *angle1, *angle2, *angle3);
	}
	/*else
	{
	printf("\n This is an Invalid Triangle");

	}*/

	return 0;
}

