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

void insertAtTail(Node * &head, int data){
    Node * temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node * n=new Node(data);
    temp->next=n;
}
void updatePosition(Node * &head,int data,int pos){
    Node * temp=head;
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    temp->data=data;
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
    updatePosition(head,200,3);
    display(head);
}