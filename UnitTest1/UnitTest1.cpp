#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(1, 1, 2);
			Assert::AreEqual(t, 2.);
		}
	};
}
