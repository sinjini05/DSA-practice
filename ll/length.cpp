class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        int count=0;
        if(head==NULL){
            return count;
        }
        while(head!=NULL){
            head=head->next;
            count++;
        }
        return count;
    }
};
    