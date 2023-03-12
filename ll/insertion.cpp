insertatmiddle(Node* &head, int position,int x){
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* nodetoinsert= new Node(x);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}