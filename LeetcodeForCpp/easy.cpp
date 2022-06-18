#include "easy.h"

Easy::Easy() {

}

std::vector<int> Easy::twoSum(std::vector<int>& nums, int target)
{
	std::vector<int> answer;

	int i = 0, len = nums.size(), j;

	for (i = 0; i < len - 1; i++) {
		for (j = i + 1; j < len; j++) {

			if (nums[i] + nums[j] == target) {
				answer = { i, j };				
				goto ANSWER;
			}
		}
	}

ANSWER:
	return answer;
}


bool Easy::palindromeNumber(int x) {
	if (x < 0) {
		return false;
	}

	std::string str = std::to_string(x);
	int i, len = str.size();

	for (i = 0; i < len; i++) {
		if (str[i] != str[len - i - 1]) {
			return false;
		}
	}

	return true;
}

#pragma region romanToInt
int Easy::romanToInt(std::string s) {
    int value = 0;
    std::vector<std::string> sub_roman = subRoman(s);

    for (std::string sub : sub_roman) {
        value += computeRomanValue(sub);
    }

    return value;
}

std::vector<std::string> Easy::subRoman(std::string roman) {
    std::string first;
    std::vector<std::string> second;
    int i, len = roman.length();

    if (len > 1) {
        for (i = 1; i < len; i++) {
            // �Y�ثe�o�Ӧr�� �p�� �e�@�Ӧr��
            if (!biggerRoman(roman[i], roman[i - 1])) {
                break;
            }
        }

        first = roman.substr(0, i);

        if (len - i > 0) {
            second = subRoman(roman.substr(i, len - i));
        }
    }
    else if (len == 1) {
        first = roman;
    }

    std::vector<std::string> sub_roman = { first };

    for (std::string s : second) {
        sub_roman.push_back(s);
    }

    return sub_roman;
}

bool Easy::biggerRoman(char curr_char, char pre_char = NULL) {
    if (pre_char == NULL) {
        return true;
    }
    else {
        return Leetcode::roman_map[curr_char] >= Leetcode::roman_map[pre_char];
    }
}

int Easy::computeRomanValue(std::string roman) {
    int i, len = roman.length(), value = Leetcode::roman_map[roman[len - 1]];

    for (i = len - 2; i >= 0; i--) {
        if (roman[i] == roman[i + 1]) {
            value += Leetcode::roman_map[roman[i]];
        }
        else {
            value -= Leetcode::roman_map[roman[i]];
        }
    }

    return value;
}
#pragma endregion

std::string Easy::longestCommonPrefix(std::vector<std::string>& strs)
{
    int n_string = strs.size();
    if (n_string == 0) {
        return "";
    }
    else if (n_string == 1) {
        return strs[0];
    }
    else
    {
        int shortest_len = strs[0].length();
        for (int i = 1; i < strs.size(); i++) {
            if (strs[i].length() < shortest_len) {
                shortest_len = strs[i].length();
            }
        }

        std::string common_prefix = "";
        int i;
        for (i = 0; i < shortest_len; i++) {
            char c = strs[0][i];
            for (int s = 1; s < n_string; s++) {
                if (strs[s][i] != c) {
                    goto OUTPUT;
                }
            }
        }

    OUTPUT:
        if (i == 0) {
            common_prefix = "";
        }
        else {
            common_prefix = strs[0].substr(0, i);
        }

        return common_prefix;
    }
}

#pragma region isValid: �Ĳv�i�A���ɡA�ܦh�ƫe�L�o�A�γ\�᭱����L�B�J�]�i�H����
bool Easy::isValid(std::string s)
{
    int len = s.length();

    // ���׬� 0
    if (len == 0) {
        //cout << "true: ���׬� 0" << endl;
        return true;
    }

    // �`���� ���� 1�A�L�k�զ����Ī��A��
    if (len & 1) {
        //cout << "�`���� ���� 1" << endl;
        return false;
    }

    // �ӼƬ��_�ƭӡA�L�k�զ����Ī��A��
    if (len % 2 != 0) {
        //cout << "�`�ӼƬ��_�ƭ�" << endl;
        return false;
    }

    std::unordered_map<char, char> left_map = {
        {')', '('},
        {']', '['},
        {'}', '{'},
    };

    int right;
    switch (s[0])
    {
    case '(':
        right = findRightParentheses('(', s, ')');
        break;
    case '[':
        right = findRightParentheses('[', s, ']');
        break;
    case '{':
        right = findRightParentheses('{', s, '}');
        break;
    default:
        return false;
    }

    // �䤣��k�A��
    if (right == -1) {
        //cout << "�䤣��k�A��" << endl;
        return false;
    }

    // �Ĥ@�լA�����S����L�A��    
    if (right == 1) {
        if (len == 2) {
            //cout << "true: �Ĥ@�լA�����S����L�A���A�B���׬� 2" << endl;
            return true;
        }

        // �p��k�A���k��Ѿl���A���ӼơA�Y���_�ƭӡA�h�L�k�զ����Ī��A��
        int n_right = len - right - 1;
        if (n_right % 2 != 0) {
            //cout << "�k��Ѿl���A���ӼƬ��_�ƭ�" << endl;
            return false;
        }

        return true & isValid(s.substr(right + 1, n_right));
    }

    // �Ĥ@�լA�����]�t�F��L�A��
    else {
        // left �����ƮɡA��ܥ��k�A���ҧ��A���ӼƬ��_�ƭӡA�L�k�զ����Ī��A��
        if (right % 2 == 0) {
            //cout << "�Ĥ@�լA�����]�t�F��L�A���A�B�k��Ѿl���A���ӼƬ��_�ƭ�" << endl;
            return false;
        }

        // �p��k�A���k��Ѿl���A���ӼơA�Y���_�ƭӡA�h�L�k�զ����Ī��A��
        int n_right = len - right - 1;
        if (n_right % 2 != 0) {
            //cout << "�Ĥ@�լA�����]�t�F��L�A���A�B���k�A���ҧ��A���ӼƬ��_�ƭ�" << endl;
            return false;
        }

        if (n_right == 0) {
            return true & isValid(s.substr(1, right - 1));
        }
        else {
            return true & isValid(s.substr(1, right - 1)) & isValid(s.substr(right + 1, n_right));
        }
    }

    //cout << "��L���~(" << s << "): len = " << len << ", left = " << left << ", right = " << right << endl;
    return false;
}

int Easy::findRightParentheses(char left_parentheses, std::string s, char right_parentheses) {
    int i, len = s.length(), pointer = 0;

    for (i = 0; i < len; i++) {
        if (s[i] == left_parentheses) {
            pointer -= 1;
        }
        else if (s[i] == right_parentheses) {
            pointer += 1;
        }

        if (pointer == 0) {
            return i;
        }
    }

    return -1;
}
#pragma endregion

ListNode* Easy::mergeTwoLists(ListNode* l1, ListNode* l2)
{
    int len1 = l1->getDepth(), len2 = l2->getDepth();

    // �P�_�ӧO���סA�Y�� ListNode �� 0 ���A�h��^�t�@�� ListNode
    if ((len1 == 0) || (len2 == 0)) {
        if ((len1 == 0) && (len2 == 0)) {
            return nullptr;
        }
        else {
            if (len1 == 0) {
                return l2;
            }
            else {
                return l1;
            }
        }
    }
    else {
        ListNode* merge_list, * node, * node1, * node2;

        if (l1->val < l2->val) {
            node = new ListNode(l1->val);
            node1 = l1->next;
            node2 = l2;
        }
        else {
            node = new ListNode(l2->val);
            node1 = l1;
            node2 = l2->next;
        }

        merge_list = node;

        // node1, node2 �����ŮɡA�����j��
        while ((node1 != nullptr) || (node2 != nullptr)) {
            // node1, node2 ��������
            if ((node1 != nullptr) && (node2 != nullptr)) {
                // node1 �ƭȸ��p
                if (node1->val <= node2->val) {
                    node->next = new ListNode(node1->val);
                    node1 = node1->next;
                }

                // node2 �ƭȸ��p
                else {
                    node->next = new ListNode(node2->val);
                    node2 = node2->next;
                }
            }

            // node1, node2 �䤤�@�Ӭ���
            else {
                // node1 ������
                if (node2 == nullptr) {
                    node->next = new ListNode(node1->val);
                    node1 = node1->next;
                }

                // node2 ������
                else {
                    node->next = new ListNode(node2->val);
                    node2 = node2->next;
                }
            }

            //cout << (*node).val << endl;
            node = node->next;
        }

        return merge_list;
    }
}

// ���Ѥ��e����ֳt�������A�u�ݪ��פ������e�O���ҹw�����N�n�A���ݭn�ק��� vector
int Easy::removeDuplicates(std::vector<int>& nums)
{
    /*
    int len = static_cast<int>(nums.size());

    if (len == 0 || len == 1) {
        return len;
    }
    else {

        int i, elements = 0, num = nums[0];

        for (i = 1; i < len; i++) {
            if (nums[i] != num) {
                elements++;
                num = nums[i];
                nums[elements] = num;
            }
        }

        return elements + 1;
    }
    */
    size_t len = nums.size();
    if (len == 0 || len == 1) {
        return len;
    }

    std::vector<int>::iterator it;
    int last = nums[0];

    for (it = nums.begin() + 1; it != nums.end(); it++) {
        if (*it == last) {
            it = nums.erase(it);
            it--;
        }
        else {
            last = *it;
        }
    }

    return nums.size();
}

int Easy::removeElement(std::vector<int>& nums, int val)
{
    int input, output = 0, temp, len = nums.size();

    for (input = 0; input < len; input++) 
    {
        if (nums[input] != val) 
        {
            nums[output] = nums[input];
            output++;
        }
    }

    return output;
}
