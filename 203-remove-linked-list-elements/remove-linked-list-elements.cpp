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
    ListNode* removeElements(ListNode* head, int val) {
        while(head != NULL && head->val == val){
            head = head->next;
        }

        if(head == NULL){
            return head;
        }

        ListNode* curr = head;
        ListNode* bi = head->next;

        while(bi != NULL){
            if(bi->val == val){
                curr->next = bi->next;
            } else {
                curr = curr->next;
            }
            bi = bi->next;
        }

        return head;
    }
};