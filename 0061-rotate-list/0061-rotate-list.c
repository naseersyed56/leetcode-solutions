/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    if(!head ||!head->next|| k==0) return head;
 struct ListNode* temp = head;
   int count =1;
   while (temp->next){
    temp = temp->next;
    count++;
   }
   //if length is more than rotation times decrease by divide
    k = k % count;
    //reminder always smaller than length
    if(k==0) return head;
    temp->next =head;

    //finding new tail
    int steps =count-k;
 struct   ListNode* newtail = head;
while(--steps){
    newtail=newtail->next;
}
struct ListNode* newhead =newtail->next;
newtail->next = NULL;
return newhead;
}