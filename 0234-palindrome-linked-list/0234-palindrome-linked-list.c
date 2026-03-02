/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(!head)
    return true;
  struct ListNode* slow =head;
  struct ListNode* fast = head;
while(fast && fast->next  ){
      slow = slow->next;
      fast = fast->next->next;
}
void *reverse(struct ListNode* slow){

  struct ListNode* prev =NULL;
  struct ListNode* next =NULL;
  struct ListNode* curr =slow;
  while(curr){
    next =curr->next;
    curr->next =prev;
    prev =curr;
    curr =next;
  }
  return prev;
}
  struct ListNode* first =head;
  struct ListNode* second =reverse(slow);
 while (second){
    if (first ->val != second ->val)
         return false;
        first =first->next;
        second = second->next;
    }
    return true;
 }
