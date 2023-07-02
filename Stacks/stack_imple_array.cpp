// Stack Implementation using Array
#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int * arr;
    int top;
    int size;
    Stack(int size){
        arr=new int[size];
        top=-1;
        this->size=size;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top--;
        }
    }

    int Top(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        else{
            return arr[top];
        }
    }

    int sizeOfStack(){
        return top+1;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }

    void printStack(){
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main()
{
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.printStack();
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;
    cout<<s.sizeOfStack()<<endl;
    cout<<s.isEmpty()<<endl;
    s.printStack();
}