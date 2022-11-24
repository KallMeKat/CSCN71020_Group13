#pragma once

// structs for different parts of the rectangle, the points, the sides and the coordinates 
typedef struct points {
	double x;
	double y;
}POINTS;

typedef struct rectangle {
	POINTS point1;
	POINTS point2;
	POINTS point3;
	POINTS point4;
}RECTANGLE;

typedef struct rectanglesides {

	double side1;
	double side2;
	double side3;
	double side4;
}RECTANGLESIDES;

void printWelcome();
int printShapeMenu();
int* getTriangleSides(int* triangleSides);
// Katarina Added the function call for the rectangle sides function 
RECTANGLE getRectanglePoints(void);