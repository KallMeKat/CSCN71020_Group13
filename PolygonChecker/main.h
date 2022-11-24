#pragma once
void printWelcome();
int printShapeMenu();
int* getTriangleSides(int* triangleSides);
// Katarina Added the function call for the rectangle sides function 
RECTANGLE getRectanglePoints(void);

// structs for different parts of the rectangle, the points, the sides and the coordinates 
typedef struct points {
	float x;
	float y;
}POINTS;


typedef struct rectangle {
	POINTS point1;
	POINTS point2;
	POINTS point3;
	POINTS point4;
}RECTANGLE;

typedef struct rectanglesides {

	float side1;
	float side2;
	float side3;
	float side4;
}RECTANGLESIDES;