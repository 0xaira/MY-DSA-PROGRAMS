// Stack Implementation using Array
#include <bits/stdc++.h>
using namespace std;

class Stack{
    int *arr;
    int nextIndex;
    int capacity;
    public:
    Stack(){
        capacity=4;
        arr=new int[capacity];
        nextIndex=0;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        return nextIndex==0;
    }
    void push(int element){
        if(nextIndex==capacity){
            int *newArr=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newArr[i]=arr[i];
            }
            capacity*=2;
            delete [] arr;
            arr=newArr;
        }
        arr[nextIndex]=element;
        nextIndex++;
    }
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return arr[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return arr[nextIndex-1];
    }
};