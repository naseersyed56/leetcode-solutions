/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || !headB) return NULL;

        ListNode* fast = headA;
         ListNode* slow = headB;

        while(fast != slow){
            fast =(fast ==NULL)?headB:fast->next;
            slow =(slow == NULL)?headA:slow->next;

        }
        return fast;//
    }
   
};