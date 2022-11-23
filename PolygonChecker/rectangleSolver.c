#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "rectangleSolver.h"

// Katarina added the c file for the rectangleSolver.c

// Katarina made this function 
double analyzeRectangle(double x1, double x2, double x3, double x4, double y1, double y2, double y3, double y4) {

	//Katarina added the distance formula to calucate the sides distance 
	// put this in seperate function 
	double distance1, distance2, distance3, distance4;

	distance1 = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	distance2 = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	distance3 = sqrt((x4 - x2) * (x4 - x2) + (y4 - y2) * (y4 - y2));
	distance4 = sqrt((x4 - x3) * (x4 - x3) + (y4 - y3) * (y4 - y3));

	printf("Distance between (%0.2lf, %0.2lf) and (%0.2lf, %0.2lf) is %0.2lf\n", x1, y1, x2, y2, distance1);
	printf("Distance between (%0.2lf, %0.2lf) and (%0.2lf, %0.2lf) is %0.2lf\n", x1, y1, x3, y3, distance2);
	printf("Distance between (%0.2lf, %0.2lf) and (%0.2lf, %0.2lf) is %0.2lf\n", x2, y2, x4, y4, distance3);
	printf("Distance between (%0.2lf, %0.2lf) and (%0.2lf, %0.2lf) is %0.2lf\n", x3, y3, x4, y4, distance4);
	// takes the pairs of points and forms 4 lines
	// you can form lines from two points using the distance formula 

	return distance1;
	return distance2;
	return distance3;
	return distance4;
}

// This function was made by Joshua 
char* isItaRectangle(double distance1, double distance2, double distance3, double distance4) {

	// takes those 4 lines (distance1, distance2, distance3, distance4, and compares to see if 2 of them are the same length, if they are the same length, it will report the area of the rectangle and output the perimeter 
	char* results = "";
	if (distance1 == distance2 == distance3 == distance4) {
		results = "This is a square not a rectange";
	}
	else if (distance1 == distance2 && distance3 == distance4) {

		results = "This is a rectangle";
	}
	else if (distance1 == distance4 && distance3 == distance2) {

		results = "This is a rectangle";
	}
	else if (distance1 == distance3 && distance4 == distance2) {

		results = "This is a rectangle";
	}
	else {
		results = "not a rectangle or square";
	}
	// don't forget to add the perimeter and area of the rectangle  
	return results;
}