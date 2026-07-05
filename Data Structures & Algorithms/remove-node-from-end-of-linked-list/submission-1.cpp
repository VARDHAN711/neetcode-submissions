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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0, head);
        ListNode* prev = &dummy;
        ListNode* curr = head;
        int size = 0;
        while(curr != nullptr){
            size++;
            curr = curr->next;
        }
        curr = head;
        
        int idx = 0;
        while(idx < size - n){
            prev = curr;
            curr = curr->next;
            idx++;
        }
        prev->next = curr->next;
        return dummy.next;;
    }
};
