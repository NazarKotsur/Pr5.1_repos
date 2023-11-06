#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr5.1/Pr5.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51
{
	TEST_CLASS(UnitTest51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 2.0;
			double y = 3.0;
			double expented = x / pow(y, 2) - sin(y / (pow(x, 2)));
			double actual = g(x, y);
		}
	};
}
