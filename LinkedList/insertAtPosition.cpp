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
void insertAtHead(Node * &head,int data){
    Node * temp=new Node(data);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node * &head, int data){
    Node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node * n=new Node(data);
    temp->next=n;
}
void insertAtPosition(Node* &head,int data,int pos){
       if(pos==0){
           insertAtHead(head,data);
       }
       else{
           Node * temp=head;
           for(int i=0;i<pos-1;i++){
               temp=temp->next;
           }
           Node * n=new Node(data);
           n->next=temp->next;
           temp->next=n;
       }
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
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    insertAtPosition(head,100,3);
    display(head);
}