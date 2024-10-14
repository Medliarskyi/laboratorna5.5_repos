#include "pch.h"
#include "CppUnitTest.h"
#include "../lab55/lab55.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(gcd(48, 18), 6); 
		}
	};
}
