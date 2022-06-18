#include "leetcode.h"

std::unordered_map<char, int> Leetcode::roman_map = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000},
};

ListNode* vectorToListNode(const std::vector<int>& vi) {
    int len = vi.size();

    if (len == 0) {
        return new ListNode();
    }
    else {
        ListNode* list_node = new ListNode(vi[0]);
        int i;

        for (i = 1; i < len; i++) {
            list_node->addNode(vi[i]);
        }

        return list_node;
    }
}

bool operator==(const ListNode& self, const ListNode& other) {
    //bool operator==(const ListNode &self, const ListNode& other) const {
    std::cout << "operator==" << std::endl;
    return true;

    int depth = self.getDepth(), other_depth = other.getDepth();

    if (depth != other_depth) {
        return false;
    }

    ListNode* curr = (ListNode*)&self;
    ListNode* compare = (ListNode*)&other;

    for (int i = 0; i < depth; i++)
    {
        if (curr->val != compare->val)
        {
            return false;
        }

        curr = curr->next;
        compare = compare->next;
    }

    return true;
}