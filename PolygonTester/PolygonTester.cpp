#include "pch.h"
#include "CppUnitTest.h"



// Katarina and Sadiya added the test cases for the project 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" {
#include "../PolygonChecker/triangleSolver.h"
#include "../PolygonChecker/rectangleSolver.h"
#include "../PolygonChecker/main.h"
}
namespace PolygonTester
{
	TEST_CLASS(analyzingTriangle)
	{
	public:
		
		TEST_METHOD(ScaleneTriangle)
		{
			char* actual = analyzeTriangle(4, 5, 6);

			Assert::AreEqual("Scalene triangle", actual);
		}

		TEST_METHOD(IsoscelesTriangle)
		{
			char* actual = analyzeTriangle(4, 2, 2);

			Assert::AreEqual("Isosceles triangle", actual);
		}

		TEST_METHOD(EquilateralTriangle)
		{
			char* actual = analyzeTriangle(4, 4, 4);

			Assert::AreEqual("Equilateral triangle", actual);
		}

	};

	//isitatriangle tests here 
	TEST_CLASS(Triangleisit)
	{
	public: 
		TEST_METHOD(trianglevalid)
		{ 
			float angle1, angle2, angle3;
		  isItaTriangleAngles(4, 5, 6, &angle1, &angle2, &angle3);
		  float tolerance = 0.01;
			Assert::AreEqual(angle1, 25.6F, tolerance);
			Assert::AreEqual(angle2, 32.69F, tolerance);
			Assert::AreEqual(angle3, 40.4F, tolerance);
		}
	};
	
	//Katarina test Case
	TEST_CLASS(rectanglePoints)
	{
	public:

		TEST_METHOD(PointsRectangle)
		{   
			POINTS point1;

			point1.x = 5;
			point1.y = 7;

			POINTS point2;
			point2.x = 4;
			point2.y = 5;

			POINTS point3;

			point3.x = 5;
			point3.y = 5;

			POINTS point4;

			point4.x = 4;
			point4.y = 7;

			RECTANGLE rectangle;
			rectangle.point1 = point1;
			rectangle.point2 = point2;
			rectangle.point3 = point3;
			rectangle.point4 = point4;
			RECTANGLESIDES actual = analyzeRectangle(rectangle);
			double tolerance = 0.01;
			Assert::AreEqual(actual.side1, 2.2, tolerance);
			Assert::AreEqual(actual.side2, 2.0, tolerance);
			Assert::AreEqual(actual.side3, 2.0, tolerance);
			Assert::AreEqual(actual.side4, 2.2, tolerance);
		}
	};

	//Katarina test case
	TEST_CLASS(sidesofrectnagle)
	{
	public:

		TEST_METHOD(IsRectangle)
		{
			RECTANGLESIDES rectangle;

			RECTANGLESIDES side1; 

			rectangle.side1 = 5; 
			rectangle.side2 = 5;
			rectangle.side3 = 5;
			rectangle.side4 = 5;
			char* actual = isItaRectangle(rectangle);

			Assert::AreEqual("Is a square", actual);
		}
	};

	//Katarina test Case
	TEST_CLASS(sidesrectnagle)
	{
	public:

		TEST_METHOD(IsRectangle)
		{
			char* actual = isItaRectangle(1, 2, 3, 4);

			Assert::AreEqual("Is not a square or rectangle", actual);
		}
	};

}
