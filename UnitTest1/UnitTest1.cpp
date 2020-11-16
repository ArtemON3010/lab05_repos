#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота № 5.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = z(0);
			Assert::AreEqual(t, 1.);
		}
	};
}
