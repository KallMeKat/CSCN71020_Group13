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
	
	//Katarina Test Case
	TEST_CLASS(getTrianglesides)
	{
	public:

		TEST_METHOD(trianglesides)
		{
			char* actual = getTriangleSides(7, 9, 0);

			Assert::AreEqual(7,9,0, actual);
		}
	};
	//Katarina test Case
	TEST_CLASS(rectangleSides)
	{
	public:

		TEST_METHOD(IsRectangle)
		{
			char* actual = isItaRectangle(4, 3, 4, 3);

			Assert::AreEqual("Is a rectangle", actual);
		}
	};

	//Katarina test case
	TEST_CLASS(rectangleSides)
	{
	public:

		TEST_METHOD(IsRectangle)
		{
			char* actual = isItaRectangle(5, 5, 5, 5);

			Assert::AreEqual("Is a square", actual);
		}
	};

	//Katarina test Case
	TEST_CLASS(rectangleSides)
	{
	public:

		TEST_METHOD(IsRectangle)
		{
			char* actual = isItaRectangle(1, 2, 3, 4);

			Assert::AreEqual("Is not a square or rectangle", actual);
		}
	};

}
