#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include "leetcode.h"

class Easy
{
public:
	Easy();

	// =====以下為題目=====
	std::vector<int> twoSum(std::vector<int>&, int);
	bool palindromeNumber(int);
	#pragma region romanToInt
	int romanToInt(std::string);
	std::vector<std::string> subRoman(std::string);
	bool biggerRoman(char, char);
	int computeRomanValue(std::string);
	#pragma endregion
	std::string longestCommonPrefix(std::vector<std::string>&);
	#pragma region isValid
	bool isValid(std::string);
	int findRightParentheses(char, std::string, char);
	#pragma endregion
	ListNode* mergeTwoLists(ListNode*, ListNode*);
	int removeDuplicates(std::vector<int>&);
	int removeElement(std::vector<int>&, int);
};

