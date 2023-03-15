 Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* element = new Node(x);
       element->next = head;
       return element;
    }