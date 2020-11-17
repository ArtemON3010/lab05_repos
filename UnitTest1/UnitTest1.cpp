#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = P2(2, 1);
			Assert::AreEqual(t, 1.);
		}
	};
}
