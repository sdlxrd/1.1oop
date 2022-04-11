#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\1.1oop\1.1oop\1.1oop.cpp"
#include "C:\Users\Misha\source\repos\1.1oop\1.1oop\Pay.h"
#include "C:\Users\Misha\source\repos\1.1oop\1.1oop\Pay.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pay p;
			int result;
			int n = 10;
			p.setfirst(15);
			p.setsecond(3);
			cout << endl;
			p.Display();

			result = p.summa(n);
			Assert::AreEqual(result, 50);
		}
	};
}
