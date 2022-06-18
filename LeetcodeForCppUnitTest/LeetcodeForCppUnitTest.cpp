#include "pch.h"
#include "CppUnitTest.h"
#include "../LeetcodeForCpp/utils.cpp" 

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetcodeForCppUnitTest
{
	TEST_CLASS(LeetcodeForCppUnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			bool t = true;
			std::string result = utils::boolToString(t);
			std::string answer = (std::string)"True";
			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestMethod2)
		{
			bool t = false;
			std::string result = utils::boolToString(t);
			std::string answer = (std::string)"False";
			Assert::AreEqual(answer, result);
		}
	};
}
