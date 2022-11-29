#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rectangleSolver.h"
#include "main.h"

// Katarina added the c file for the rectangleSolver.c

// Katarina made this function 
RECTANGLESIDES analyzeRectangle(RECTANGLE points) {

	//Katarina added the distance formula to calucate the sides distance 
	// put this in seperate function 
//	double distance1, distance2, distance3, distance4;

	RECTANGLESIDES rectside;

	rectside.side1=  sqrt((points.point2.x- points.point1.x) * (points.point2.x - points.point1.x) + (points.point2.y - points.point1.y) * (points.point2.y- points.point1.y));
	rectside.side2 = sqrt((points.point3.x- points.point1.x) * (points.point3.x- points.point1.x) + (points.point3.y - points.point1.y) * (points.point3.y- points.point1.y));
	rectside.side3 = sqrt((points.point4.x - points.point2.x) * (points.point4.x - points.point2.x) + (points.point4.y- points.point2.y) * (points.point4.y- points.point2.y));
	rectside.side4 = sqrt((points.point4.x- points.point3.x) * (points.point4.x- points.point3.x) + (points.point4.y - points.point3.y) * (points.point4.y - points.point3.y));

	printf("Distance between (%0.2lf, %0.2lf) and (%0.2lf, %0.2lf) is %0.2lf\n", points.point1.x, points.point1.y, points.point2.x, points.point2.y, rectside.side1);
	printf("Distance between (%0.2lf, %0.2lf) and (%0.2lf, %0.2lf) is %0.2lf\n", points.point1.x, points.point1.y, points.point3.x, points.point3.y, rectside.side2);
	printf("Distance between (%0.2lf, %0.2lf) and (%0.2lf, %0.2lf) is %0.2lf\n", points.point2.x, points.point2.y, points.point4.x, points.point4.y, rectside.side3);
	printf("Distance between (%0.2lf, %0.2lf) and (%0.2lf, %0.2lf) is %0.2lf\n", points.point3.x, points.point3.y, points.point4.x, points.point4.y, rectside.side4);
	// takes the pairs of points and forms 4 lines
	// you can form lines from two points using the distance formula 


	// perimeter of the given rectangle
	float perimeter;

	perimeter = rectside.side1 + rectside.side2 + rectside.side3 + rectside.side4;

	printf("The perimeter of the given rectangle is - %f\n", perimeter);

	// Area of the given rectangle

	float area;

	area = rectside.side1 * rectside.side2;

	printf("The area of the given rectangle is - %f\n", area);

	return rectside;
}

// This function was made by Joshua 
char* isItaRectangle(RECTANGLESIDES side) {

	// takes those 4 lines (distance1, distance2, distance3, distance4, and compares to see if 2 of them are the same length, if they are the same length, it will report the area of the rectangle and output the perimeter 
	char* results = "";
	if (side.side1 == side.side2 == side.side3 == side.side4) {
		results = "This is a square not a rectange";
	}
	else if (side.side1 == side.side2 && side.side3 == side.side4) {

		results = "This is a rectangle";
	}
	else if (side.side1 == side.side4 && side.side3 == side.side2) {

		results = "This is a rectangle";
	}
	else if (side.side1 == side.side3 && side.side4 == side.side2) {

		results = "This is a rectangle";
	}
	else {
		results = "not a rectangle or square";
	}
	// don't forget to add the perimeter and area of the rectangle  

	return results;
}
