#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
int insertAtHead(Node * &head,int data){
    Node * temp=new Node(data);
    temp->next=head;
    head=temp;
}
int display(Node * head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
   Node * node1= new Node(10);
    Node * head= node1;
    insertAtHead(head,20);
    
    insertAtHead(head,30);
    
    insertAtHead(head,40);
    
    insertAtHead(head,50);
    
    insertAtHead(head,60);
    display(head);
}