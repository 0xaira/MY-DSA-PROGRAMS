int insertAtHead(Node * &head,int data){
    Node * temp=new Node(data);
    temp->next=head;
    head=temp;
}