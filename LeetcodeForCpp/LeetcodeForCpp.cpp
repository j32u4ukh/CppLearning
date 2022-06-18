// LeetcodeForCpp.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <sstream>
#include "utils.hpp"
#include "easy.h"

enum class Color : int {
    red,
    green,
    blue
};

// 將 enum class 當中的列舉值轉換成數字
template <typename Enumeration>
auto as_integer(Enumeration const value) -> typename std::underlying_type<Enumeration>::type
{
    return static_cast<typename std::underlying_type<Enumeration>::type>(value);
}

template<typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
    std::stringstream ss;
    ss << "[";

    int len = vec.size();
    if (len > 0) {
        ss << vec[0];

        int i;
        for (i = 1; i < vec.size(); i++) {
            ss << ", " << vec[i];
        }
    }

    ss << "]";
    os << ss.str();
    return os;
}

/* 傳遞物件的函式，須分別傳遞"被建立的物件"本身位置，以及"物件函式"的位置
tester.classFunctionPointerTest(&solution, &Solution::classFunctionPointer);

// 參考：https://www.tutorialspoint.com/function-pointer-to-member-function-in-cplusplus
*/

int main()
{
	ListNode* q1 = new ListNode(1);
	q1->addNode(2);
	q1->addNode(4);

	ListNode* q2 = new ListNode(1);
	q2->addNode(2);
	q2->addNode(4);

	bool result = *q1 == *q2;
    std::cout << result << std::endl;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
