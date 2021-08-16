#include "iostream"

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:

    ListNode *node = new ListNode(0);
    ListNode *copy = node;
    int ans =0;
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        while (l1 != nullptr && l2 != nullptr) {
            ans = l1->val+l2->val;
            copy->next = new ListNode(0);
            if (ans>=10) {ans %=10;
            copy->val+=1;
            }
            copy->val = ans;
            copy = copy->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 != nullptr) {
            copy->next = new ListNode;
            copy->val = (l1->val);
            copy = copy->next;
            l1 = l1->next;
        }
        while (l2 != nullptr) {
            copy->next = new ListNode;
            copy->val = (l2->val);
            copy = copy->next;
            l2 = l2->next;
        }
        return node;
    }
};


//int main() {
//    auto a = new ListNode(1);
//    auto b = new ListNode(2);
//    auto c = new ListNode(3);
//    a->next = b;
//    b->next = c;
//    std::cout << Solution().addTwoNumbers(a, a)->val;
//
//
//}