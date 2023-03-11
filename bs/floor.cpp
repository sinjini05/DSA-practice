Node* constructDLL(vector<int>& arr) {
        Node * root = new Node(arr[0]) ; 
        Node * temp = root ; 
        temp->prev=NULL ; 
        for(int i=1 ; i<arr.size() ; i++){
            Node * node = new Node(arr[i]) ; 
            node->prev = temp ; 
            temp->next = node ; 
            temp = temp->next ; 
        }
        return root ; 
    }