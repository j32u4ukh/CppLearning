#ifndef _UTILS_HPP_
#define _UTILS_HPP_
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>

#define _countof(array) sizeof(array)/sizeof(*array)
#define defGetArrayLength(_array) (sizeof(_array) / sizeof(*_array))

namespace utils {
	std::string boolToString(bool);	

	namespace string {
		std::vector<int> findAll(std::string, char);
		std::string subString(std::string str, int from, int to);
	}

	namespace vector {
		std::string toString(std::vector<int>& vi);
	}

	namespace array {

	}

	namespace map {
		bool isContain(std::map<std::string, int>, std::string);
		bool isContain(std::map<char, int>, char);

		template<typename K, typename V>
		bool isContain_(std::map<K, V> _map, K _target);
	}
}
#endif // _UTILS_HPP_