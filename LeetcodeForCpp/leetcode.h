#pragma once
#include <unordered_map>
#include <sstream>
#include <iostream>

class Leetcode
{
public:
	static std::unordered_map<char, int> roman_map;
};

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

    void addNode(int x) {
        ListNode* node = this;

        // ���o�̫�@�� ListNode(�� next ����)
        while (node->next != nullptr)
        {
            node = node->next;
        }

        node->next = new ListNode(x);
    }

    int getDepth() const{
        int depth = 0;

        if (this != nullptr) {
            depth++;

            ListNode* node = (ListNode*)this;

            // �p�� ListNode �`��
            while (node->next != nullptr)
            {
                node = node->next;
                depth++;
            }
        }

        return depth;
    }

    std::string toString() {
        int d, depth = getDepth() - 1;

        std::stringstream ss;
        ss << "[ ";

        if (this != nullptr) {
            ss << this->val;

            ListNode* node = next;

            // d: �Ω�p���A�ӫD���ޭ�
            for (d = 0; d < depth; d++) {
                ss << ", " << node->val;
                node = node->next;
            }
        }

        ss << " ]";

        return ss.str();
    }
};

ListNode* vectorToListNode(const std::vector<int>& vi);
bool operator==(const ListNode& self, const ListNode& other);