class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* pointer1 = headA;
        ListNode* pointer2 = headB;

        while (pointer2 != NULL) {

            
            if (pointer1 == pointer2) {
                return pointer1;
            }

           
            pointer1 = pointer1->next;

            
            if (pointer1 == NULL) {
              
                pointer2 = pointer2->next;

                
                pointer1 = headA;
            }
        }

        return NULL;
    }
};