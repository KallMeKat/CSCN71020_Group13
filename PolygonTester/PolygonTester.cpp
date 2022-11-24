#include "pch.h"
#include "CppUnitTest.h"
//#include "triangleSolver.h"
//#include "rectangleSolver.h"
//#include "main.h"


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
	};

	TEST_CLASS(analyzingTriangle)
	{
	public:

		TEST_METHOD(IsoscelesTriangle)
		{
			char* actual = analyzeTriangle(4, 2, 2);

			Assert::AreEqual("Isosceles triangle", actual);
		}
	};

	TEST_CLASS(analyzingTriangle)
	{
	public:

		TEST_METHOD(EquilateralTriangle)
		{
			char* actual = analyzeTriangle(4, 4, 4);

			Assert::AreEqual("Equilateral triangle", actual);
		}
	};

	TEST_CLASS(rectanglePoints)
	{
	public:

		TEST_METHOD(IsRectangle)
		{
			char* actual = analyzeRectangle(4, 3, 4, 3);

			Assert::AreEqual("Is a rectangle", actual);
		}
	};

}
