class Solution {
    void reverse(ListNode* &head, ListNode* curr, ListNode* prev){

        //base case
        if(curr==NULL){
            //returning reverse
            head = prev;
            return;
        }

        ListNode* forward = curr->next;
        reverse(head,forward,curr);
        curr->next=prev;



    }
public:
ListNode* reverseList(ListNode* head) {
 
    ListNode* prev = NULL;
    ListNode* curr = head;
    ListNode* forward = NULL;
    reverse(head,curr,prev);
    return head;

}
};