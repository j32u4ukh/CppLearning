#include "pch.h"
#include "CppUnitTest.h"
#include "../LeetcodeForCpp/utils.cpp" 
#include "../LeetcodeForCpp/easy.cpp" 
#include "../LeetcodeForCpp//leetcode.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LeetcodeForCppUnitTest
{
	TEST_CLASS(LeetcodeForCppUnitTest)
	{
	public:
		TEST_METHOD(TestTwoSum1)
		{
			std::vector<int> vi = { 2, 7, 11, 15 };
			int target = 9;
			std::vector<int> answer = {0, 1};

			Easy easy;
			std::vector<int> result = easy.twoSum(vi, target);

			Assert::AreEqual(answer[0], result[0]);
		}

		TEST_METHOD(TestTwoSum2)
		{
			std::vector<int> vi = { 3, 2, 4 };
			int target = 6;
			std::vector<int> answer = { 1, 2 };

			Easy easy;
			std::vector<int> result = easy.twoSum(vi, target);

			Assert::AreEqual(answer[0], result[0]);
		}
		
		TEST_METHOD(TestTwoSum3)
		{
			std::vector<int> vi = { 3, 3 };
			int target = 6;
			std::vector<int> answer = { 0, 1 };

			Easy easy;
			std::vector<int> result = easy.twoSum(vi, target);

			Assert::AreEqual(result.size(), (size_t)2);

			for (size_t i = 0; i < result.size(); i++) 
			{
				Assert::AreEqual(answer[i], result[i]);
			}
		}

		TEST_METHOD(TestPalindromeNumber1)
		{
			int question = 121;
			bool answer = true;

			Easy easy;
			bool result = easy.palindromeNumber(question);

			Assert::AreEqual(answer, result);
		}
		
		TEST_METHOD(TestPalindromeNumber2)
		{
			int question = -121;
			bool answer = false;

			Easy easy;
			bool result = easy.palindromeNumber(question);

			Assert::AreEqual(answer, result);
		}

		
		TEST_METHOD(TestPalindromeNumber3)
		{
			int question = 10;
			bool answer = false;

			Easy easy;
			bool result = easy.palindromeNumber(question);

			Assert::AreEqual(answer, result);
		}
		
		TEST_METHOD(TestRomanToInteger1)
		{
			std::string question = "III";
			int answer = 3;

			Easy easy;
			int result = easy.romanToInt(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestRomanToInteger2)
		{
			std::string question = "LVIII";
			int answer = 58;

			Easy easy;
			int result = easy.romanToInt(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestLongestCommonPrefix1)
		{
			std::vector<std::string> question = { "flower","flow","flight" };
			std::string answer = "fl";

			Easy easy;
			std::string result = easy.longestCommonPrefix(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestLongestCommonPrefix2)
		{
			std::vector<std::string> question = { "dog","racecar","car" };
			std::string answer = "";

			Easy easy;
			std::string result = easy.longestCommonPrefix(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestLongestCommonPrefix3)
		{
			std::vector<std::string> question = {};
			std::string answer = "";

			Easy easy;
			std::string result = easy.longestCommonPrefix(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestLongestCommonPrefix4)
		{
			std::vector<std::string> question = { "tokyo" };
			std::string answer = "tokyo";

			Easy easy;
			std::string result = easy.longestCommonPrefix(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestValidParentheses1)
		{
			std::string question = "()";
			bool answer = true;

			Easy easy;
			bool result = easy.isValid(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestValidParentheses2)
		{
			std::string question = "()[]{}";
			bool answer = true;

			Easy easy;
			bool result = easy.isValid(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestValidParentheses3)
		{
			std::string question = "(]";
			bool answer = false;

			Easy easy;
			bool result = easy.isValid(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestValidParentheses4)
		{
			std::string question = "([)]";
			bool answer = false;

			Easy easy;
			bool result = easy.isValid(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestValidParentheses5)
		{
			std::string question = "{[]}";
			bool answer = true;

			Easy easy;
			bool result = easy.isValid(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestValidParentheses6)
		{
			std::string question = "";
			bool answer = true;

			Easy easy;
			bool result = easy.isValid(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestListNodeEqual1)
		{
			ListNode* q1 = new ListNode(1);
			q1->addNode(2);
			q1->addNode(4);

			ListNode* q2 = new ListNode(1);
			q2->addNode(2);
			q2->addNode(4);

			bool result = *q1 == *q2;
			bool answer = true;

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestListNodeEqual2)
		{
			ListNode* q1 = new ListNode(1);
			q1->addNode(2);
			q1->addNode(4);

			ListNode* q2 = new ListNode(1);
			q2->addNode(3);
			q2->addNode(4);

			bool result = *q1 == *q2;
			bool answer = false;

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestListNodeEqual3)
		{
			ListNode* q1 = new ListNode(1);
			q1->addNode(2);
			q1->addNode(4);

			ListNode* q2 = new ListNode(1);
			q2->addNode(2);

			bool result = *q1 == *q2;
			bool answer = false;

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestListNodeEqual4)
		{
			ListNode* q1 = nullptr;
			ListNode* q2 = nullptr;

			bool result = *q1 == *q2;
			bool answer = true;

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestMergeTwoSortedLists1)
		{
			ListNode* q1 = new ListNode(1);
			q1->addNode(2);
			q1->addNode(4);

			ListNode* q2 = new ListNode(1);
			q2->addNode(3);
			q2->addNode(4);

			ListNode* answer = new ListNode(1);
			answer->addNode(1);
			answer->addNode(2);
			answer->addNode(3);
			answer->addNode(4);
			answer->addNode(4);

			Easy easy;
			ListNode* result = easy.mergeTwoLists(q1, q2);

			Assert::AreEqual(true, *answer == *result);
		}

		TEST_METHOD(TestMergeTwoSortedLists2)
		{
			ListNode* q1 = nullptr;
			ListNode* q2 = nullptr;
			ListNode* answer = nullptr;

			Easy easy;
			ListNode* result = easy.mergeTwoLists(q1, q2);

			Assert::AreEqual(true, *answer == *result);
		}

		TEST_METHOD(TestRemoveDuplicatesFromSortedArray1)
		{
			std::vector<int> question = { 1, 1, 2 };
			int answer = 2;

			Easy easy;
			int result = easy.removeDuplicates(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestRemoveDuplicatesFromSortedArray2)
		{
			std::vector<int> question = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
			int answer = 5;

			Easy easy;
			int result = easy.removeDuplicates(question);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestRemoveElement1)
		{
			std::vector<int> question = { 3,2,2,3 };
			int val = 3;
			int answer = 2;

			Easy easy;
			int result = easy.removeElement(question, val);

			Assert::AreEqual(answer, result);
		}

		TEST_METHOD(TestRemoveElement2)
		{
			std::vector<int> question = { 0,1,2,2,3,0,4,2 };
			int val = 2;
			int answer = 5;

			Easy easy;
			int result = easy.removeElement(question, val);

			Assert::AreEqual(answer, result);
		}
	};
}
