#include "stdafx.h"
#include "CppUnitTest.h"
#include "Functions.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(Intersection_all_point)
		{
			Assert::IsTrue(Functions::intersection_check(0, 1, 0, 1, 2, 3, 2, 3));
		}
	};
	TEST_CLASS(UnitTest2)
	{
	public:
		TEST_METHOD(parallel)
		{
			Assert::IsTrue(Functions::parallel_check(0, 1, 1, 2, 0, 0, 1, 1));
		}
	};
	TEST_CLASS(UnitTest3)
	{
	public:
		TEST_METHOD(X)
		{
			Assert::AreEqual(Functions::search_x(0,1,0,1,1,1,0,5),1.0);
		}
	};
	TEST_CLASS(UnitTest4)
	{
	public:
		TEST_METHOD(Y)
		{
			Assert::AreEqual(Functions::search_x(0, 1, 0, 1, 1, 1, 0, 5), 1.0);
		}
	};
}