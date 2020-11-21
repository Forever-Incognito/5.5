#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна 5.5/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = gcd(6, 2);
			Assert::AreEqual(t, 2);
		}
	};
}
