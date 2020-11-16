#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №5.2 (1)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1, 2, 3);
			Assert::AreEqual(t, 12.);
		}
	};
}
