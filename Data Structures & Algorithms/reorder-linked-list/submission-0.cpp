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
    void reorderList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return;
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* sechead = slow->next;
        slow->next = nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = sechead;
        while(curr != nullptr){
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        ListNode* sec = prev;
        ListNode* fir = head;
        while(sec != nullptr){
            ListNode* temp1 = fir->next;
            ListNode* temp2 = sec->next;
            fir->next = sec;
            sec->next = temp1;
            fir = temp1;
            sec = temp2;
        }
    }
};
