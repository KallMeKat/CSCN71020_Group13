#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rectangleSolver.h"
#include "main.h"

// Katarina added the c file for the rectangleSolver.c

// Katarina made this function 
RECTANGLESIDES analyzeRectangle(RECTANGLE points) {

	//Katarina added the distance formula to calucate the sides distance 
	
	//varible from the struct rectside is used to assign points 
	RECTANGLESIDES rectside;

	rectside.side1=  sqrt((points.point2.x- points.point1.x) * (points.point2.x - points.point1.x) + (points.point2.y - points.point1.y) * (points.point2.y- points.point1.y));
	rectside.side2 = sqrt((points.point3.x- points.point1.x) * (points.point3.x- points.point1.x) + (points.point3.y - points.point1.y) * (points.point3.y- points.point1.y));
	rectside.side3 = sqrt((points.point4.x - points.point2.x) * (points.point4.x - points.point2.x) + (points.point4.y- points.point2.y) * (points.point4.y- points.point2.y));
	rectside.side4 = sqrt((points.point4.x- points.point3.x) * (points.point4.x- points.point3.x) + (points.point4.y - points.point3.y) * (points.point4.y - points.point3.y));

	return rectside;
}

// This function was made by Joshua 
char* isItaRectangle(RECTANGLESIDES side) {

	// takes those 4 lines (distance1, distance2, distance3, distance4, and compares to see if 2 of them are the same length, if they are the same length, it will report the area of the rectangle and output the perimeter 
	char* results = "";
	if (side.side1 == side.side2 && side.side3 == side.side4) {
		results = "This is a square not a rectange";

		float perimeter;

		perimeter = side.side1 + side.side2 + side.side3 + side.side4;

		printf("The perimeter of the given shape is: %0.2f\n", perimeter);

		return results;
	}
	else if (side.side1 == side.side2 && side.side3 == side.side4) {

		results = "This is a rectangle";

		float perimeter;

		perimeter = side.side1 + side.side2 + side.side3 + side.side4;

		printf("The perimeter of the given shape is: %0.2f\n", perimeter);


		float area; //sadiya fixed the area function 

		area = side.side1 * side.side2;

		printf("The area of the given rectangle is: %0.2f\n", area);

		return results;

	}
	else if (side.side1 == side.side4 && side.side3 == side.side2) {

		results = "This is a rectangle";

		float perimeter;

		perimeter = side.side1 + side.side2 + side.side3 + side.side4;

		printf("The perimeter of the given shape is: %0.2f\n", perimeter);


		float area; //sadiya fixed the area function 

		area = side.side1 * side.side2;

		printf("The area of the given rectangle is: %0.2f\n", area);

		return results;

	}
	else if (side.side1 == side.side3 && side.side4 == side.side2) {

		results = "This is a rectangle";

		float perimeter;

		perimeter = side.side1 + side.side2 + side.side3 + side.side4;

		printf("The perimeter of the given shape is: %0.2f\n", perimeter);


		float area; //sadiya fixed the area function 

		area = side.side1 * side.side2;

		printf("The area of the given rectangle is: %0.2f\n", area);

		return results;

	}
	else {
		results = "not a rectangle or square";

		return results;
	}
	
}
