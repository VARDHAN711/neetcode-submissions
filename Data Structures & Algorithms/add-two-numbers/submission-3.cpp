/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* num1 = l1;
        ListNode* num2 = l2;
        ListNode dummy(0);
        ListNode* curr = &dummy;
        int carry = 0;
        while(num1 != nullptr || num2 != nullptr){
            int digit1 = (num1 != nullptr)? num1->val : 0;
            int digit2 = (num2 != nullptr)? num2->val : 0;
            int sum = digit1 + digit2 + carry;
            int digit = sum % 10;
            carry = sum/10;
            curr->next = new ListNode(digit);
            curr = curr->next;
            if(num1 != nullptr) num1 = num1->next;
            if(num2 != nullptr) num2 = num2->next;
        }

        if(carry != 0) curr->next = new ListNode(carry);
        return dummy.next;
    }
};
