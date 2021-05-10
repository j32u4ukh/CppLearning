#ifndef _SOLUTION_HPP_
#define _SOLUTION_HPP_
#pragma once
#include <vector>
#include <string>
#include <unordered_map>

#include "leetcode/listnode.hpp"

class Solution {
public:
    static const int roman_len = 7;
    static const char romans[roman_len];
    static std::unordered_map<char, int> roman_map;

    Solution();
    void classFunctionPointer(int val);
    // =====¥H¤U¬°ÃD¥Ø=====
    std::vector<int> twoSum(std::vector<int>&, int);
    int reverseInteger(int);
    bool palindromeNumber(int);
    int romanToInt(std::string);
    std::string longestCommonPrefix(std::vector<std::string>& strs);
    // 20. Valid Parentheses: isValid
    bool isValid(std::string s);
    // 21. Merge Two Sorted Lists: mergeTwoLists
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
    // 26. Remove Duplicates from Sorted Array: removeDuplicates
    int removeDuplicates(std::vector<int>& nums);
    int removeElement(std::vector<int>& nums, int val);
};
#endif // _SOLUTION_HPP_