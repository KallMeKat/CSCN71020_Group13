#include "pch.h"
#include "CppUnitTest.h"

// Katarina and Sadiya added the test cases for the project 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" {
#include "../PolygonChecker/triangleSolver.h"
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
}
