#ifndef _LEETCODE_UTILS_HPP_
#define _LEETCODE_UTILS_HPP_
#pragma once
#include <string>
#include <vector>
#include <map>


using namespace std;


// #define 
#define defGetArrayLength(_array) (sizeof(_array) / sizeof(_array[0]))


namespace utils {
	std::string boolToString(bool);	
}


namespace utils {
	namespace string {
		std::vector<int> findAll(std::string, char);
		std::string subString(std::string str, int from, int to);
	}
}


namespace utils {
	namespace vector {
		std::string toString(std::vector<int>& vi);
	}
}


namespace utils {
	namespace array {

	}
}


namespace utils {
	namespace map {
		bool isContain(std::map<std::string, int>, std::string);
		bool isContain(std::map<char, int>, char);

		template<typename K, typename V>
		bool isContain_(std::map<K, V> _map, K _target);
	}
}
#endif // _LEETCODE_UTILS_HPP_