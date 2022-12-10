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
	//test cases for the type of triangle
	TEST_CLASS(analyzingTriangle)
	{
	public:

		//Katarina's testcase
		TEST_METHOD(ScaleneTriangle1)
		{
			char* actual = analyzeTriangle(4, 5, 6);

			Assert::AreEqual("Scalene triangle", actual);
		}

		//Katarina's testcase
		TEST_METHOD(NotTriangle1)
		{
			char* actual = analyzeTriangle(1, 1, 3);

			Assert::AreEqual("Not a triangle", actual);
		}

		//sadiya's testcase
		TEST_METHOD(NotTriangle2)
		{
			char* actual = analyzeTriangle(4, 2, 2);

			Assert::AreEqual("Not a triangle", actual);
		}

		//sadiya's testcase
		TEST_METHOD(EquilateralTriangle1)
		{
			char* actual = analyzeTriangle(4, 4, 4);

			Assert::AreEqual("Equilateral triangle", actual);
		}

		//Joshua's testcase
		TEST_METHOD(IsoscelesTriangle1)
		{
			char* actual = analyzeTriangle(9, 9, 7);

			Assert::AreEqual("Isosceles triangle", actual);
		}

		//Joshua's testcase
		TEST_METHOD(EquilateralTriangle2)
		{
			char* actual = analyzeTriangle(7, 7, 7);

			Assert::AreEqual("Equilateral triangle", actual);
		}

		//Joshua's testcase
		TEST_METHOD(ScaleneTriangle2)
		{
			char* actual = analyzeTriangle(6, 7, 8);

			Assert::AreEqual("Scalene triangle", actual);
		}
	};

	//test cases for the triangle angles 
	TEST_CLASS(TriangleAngles)
	{
	public:
		//Katarina's testcase
		TEST_METHOD(trianglevalid1)
		{
			float angle1, angle2, angle3;
			isItaTriangleAngles(4, 5, 6, &angle1, &angle2, &angle3);
			float tolerance = 0.01;
			Assert::AreEqual(angle1, 25.60F, tolerance);
			Assert::AreEqual(angle2, 32.69F, tolerance);
			Assert::AreEqual(angle3, 40.40F, tolerance);
		}

		//Katarina's testcase
		TEST_METHOD(trianglevalid2)
		{
			float angle1, angle2, angle3;
			isItaTriangleAngles(7, 8, 9, &angle1, &angle2, &angle3);
			float tolerance = 0.01;
			Assert::AreEqual(angle1, 48.19F, tolerance);
			Assert::AreEqual(angle2, 58.41F, tolerance);
			Assert::AreEqual(angle3, 73.40F, tolerance);
		}

		//sadiya's testcase
		TEST_METHOD(trianglevalid3)
		{
			float angle1, angle2, angle3;
			isItaTriangleAngles(5, 5, 6, &angle1, &angle2, &angle3);
			float tolerance = 0.01;
			Assert::AreEqual(angle1, 53.13F, tolerance);
			Assert::AreEqual(angle2, 53.13F, tolerance);
			Assert::AreEqual(angle3, 73.74F, tolerance);
		}

		//sadiya's testcase
		TEST_METHOD(trianglevalid4)
		{
			float angle1, angle2, angle3;
			isItaTriangleAngles(5, 5, 5, &angle1, &angle2, &angle3);
			float tolerance = 0.01;
			Assert::AreEqual(angle1, 36.77F, tolerance);
			Assert::AreEqual(angle2, 36.77F, tolerance);
			Assert::AreEqual(angle3, 36.77F, tolerance);
		}

		//Joshua's testcase
		TEST_METHOD(trianglevalid5)
		{
			float angle1, angle2, angle3;
			isItaTriangleAngles(7, 7, 5, &angle1, &angle2, &angle3);
			float tolerance = 0.01;
			Assert::AreEqual(angle1, 43.29F, tolerance);
			Assert::AreEqual(angle2, 43.29F, tolerance);
			Assert::AreEqual(angle3, 29.33F, tolerance);
		}

		//Joshua's testcase
		TEST_METHOD(trianglevalid6)
		{
			float angle1, angle2, angle3;
			isItaTriangleAngles(4, 3, 5, &angle1, &angle2, &angle3);
			float tolerance = 0.01;
			Assert::AreEqual(angle1, 53.13F, tolerance);
			Assert::AreEqual(angle2, 36.87F, tolerance);
			Assert::AreEqual(angle3, 90.00F, tolerance);
		}
	};

	//test cases for the rectangle points 
	TEST_CLASS(rectanglePoints)
	{
	public:
		//Katarina's testcase
		TEST_METHOD(PointsRectangle1)
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
			Assert::AreEqual(actual.side1, 2.24, tolerance);
			Assert::AreEqual(actual.side2, 2.00, tolerance);
			Assert::AreEqual(actual.side3, 2.00, tolerance);
			Assert::AreEqual(actual.side4, 2.24, tolerance);
		}

		//Katarina's testcase
		TEST_METHOD(PointsSquare1)
		{
			POINTS point1;

			point1.x = 1;
			point1.y = 3;

			POINTS point2;
			point2.x = 1;
			point2.y = 9;

			POINTS point3;

			point3.x = 7;
			point3.y = 3;

			POINTS point4;

			point4.x = 7;
			point4.y = 9;

			RECTANGLE rectangle;
			rectangle.point1 = point1;
			rectangle.point2 = point2;
			rectangle.point3 = point3;
			rectangle.point4 = point4;
			RECTANGLESIDES actual = analyzeRectangle(rectangle);
			double tolerance = 0.01;
			Assert::AreEqual(actual.side1, 6.0, tolerance);
			Assert::AreEqual(actual.side2, 6.0, tolerance);
			Assert::AreEqual(actual.side3, 6.0, tolerance);
			Assert::AreEqual(actual.side4, 6.0, tolerance);
		}

		//Katarina's testcase
		TEST_METHOD(PointsSquare2)
		{
			POINTS point1;

			point1.x = 2;
			point1.y = 4;

			POINTS point2;
			point2.x = 2;
			point2.y = 10;

			POINTS point3;

			point3.x = 8;
			point3.y = 4;

			POINTS point4;

			point4.x = 8;
			point4.y = 10;

			RECTANGLE rectangle;
			rectangle.point1 = point1;
			rectangle.point2 = point2;
			rectangle.point3 = point3;
			rectangle.point4 = point4;
			RECTANGLESIDES actual = analyzeRectangle(rectangle);
			double tolerance = 0.01;
			Assert::AreEqual(actual.side1, 6.0, tolerance);
			Assert::AreEqual(actual.side2, 6.0, tolerance);
			Assert::AreEqual(actual.side3, 6.0, tolerance);
			Assert::AreEqual(actual.side4, 6.0, tolerance);
		}

		//sadiya's testcase
		TEST_METHOD(PointsRectangle2)
		{
			POINTS point1;

			point1.x = 9;
			point1.y = 8;

			POINTS point2;
			point2.x = 8;
			point2.y = 9;

			POINTS point3;

			point3.x = 7;
			point3.y = 6;

			POINTS point4;

			point4.x = 6;
			point4.y = 7;

			RECTANGLE rectangle;
			rectangle.point1 = point1;
			rectangle.point2 = point2;
			rectangle.point3 = point3;
			rectangle.point4 = point4;
			RECTANGLESIDES actual = analyzeRectangle(rectangle);
			double tolerance = 0.01;
			Assert::AreEqual(actual.side1, 1.41, tolerance);
			Assert::AreEqual(actual.side2, 2.83, tolerance);
			Assert::AreEqual(actual.side3, 2.83, tolerance);
			Assert::AreEqual(actual.side4, 1.41, tolerance);
		}

		//sadiya's testcase
		TEST_METHOD(PointsRectangle3)
		{
			POINTS point1;

			point1.x = 7;
			point1.y = 7;

			POINTS point2;
			point2.x = 7;
			point2.y = 7;

			POINTS point3;

			point3.x = 7;
			point3.y = 7;

			POINTS point4;

			point4.x = 7;
			point4.y = 7;

			RECTANGLE rectangle;
			rectangle.point1 = point1;
			rectangle.point2 = point2;
			rectangle.point3 = point3;
			rectangle.point4 = point4;
			RECTANGLESIDES actual = analyzeRectangle(rectangle);
			double tolerance = 0.01;
			Assert::AreEqual(actual.side1, 0, tolerance);
			Assert::AreEqual(actual.side2, 0, tolerance);
			Assert::AreEqual(actual.side3, 0, tolerance);
			Assert::AreEqual(actual.side4, 0, tolerance);
		}


		//Joshua's testcase
		TEST_METHOD(PointsRectangle4)
		{
			POINTS point1;

			point1.x = 2;
			point1.y = 5;

			POINTS point2;
			point2.x = 2;
			point2.y = 7;

			POINTS point3;

			point3.x = 6;
			point3.y = 5;

			POINTS point4;

			point4.x = 6;
			point4.y = 7;

			RECTANGLE rectangle;
			rectangle.point1 = point1;
			rectangle.point2 = point2;
			rectangle.point3 = point3;
			rectangle.point4 = point4;
			RECTANGLESIDES actual = analyzeRectangle(rectangle);
			double tolerance = 0.01;
			Assert::AreEqual(actual.side1, 2.00, tolerance);
			Assert::AreEqual(actual.side2, 4.00, tolerance);
			Assert::AreEqual(actual.side3, 4.00, tolerance);
			Assert::AreEqual(actual.side4, 2.00, tolerance);
		}


		TEST_METHOD(PointsRectangle5)
		{
			POINTS point1;

			point1.x = 3;
			point1.y = 7;

			POINTS point2;
			point2.x = 3;
			point2.y = 11;

			POINTS point3;

			point3.x = 6;
			point3.y = 7;

			POINTS point4;

			point4.x = 6;
			point4.y = 11;

			RECTANGLE rectangle;
			rectangle.point1 = point1;
			rectangle.point2 = point2;
			rectangle.point3 = point3;
			rectangle.point4 = point4;
			RECTANGLESIDES actual = analyzeRectangle(rectangle);
			double tolerance = 0.01;
			Assert::AreEqual(actual.side1, 4.00, tolerance);
			Assert::AreEqual(actual.side2, 3.00, tolerance);
			Assert::AreEqual(actual.side3, 3.00, tolerance);
			Assert::AreEqual(actual.side4, 4.00, tolerance);
		}
	};

}



	




