#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB13.1/dod.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public: 
		double dod(double a, double n, double x) {
			return a *= (2 * n * x * x - x * x) / (2 * n + 1); // доданок домножується на 
		}
		
		TEST_METHOD(TestMethod1)
		{
			
			double a = 10;  // Початкове значення 'a'
			double n = 3;   // Початкове значення 'n'
			double x = 2;   // Початкове значення 'x'

			double result = dod(a, n, x);

			Assert::AreEqual(result, 28.5714, 0.001);
		}
	};
}
