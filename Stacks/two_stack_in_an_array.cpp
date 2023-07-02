//Two Stack in an Array
#include <bits/stdc++.h>
using namespace std;

class TwoStack{
            int * arr;
            int top1;
            int top2;
            int size;
        public:
            void push1(int element){
                if(top2-top1>1){
                    top1++;
                    arr[top1]=element;
                }
                else{
                    cout<<"Stack Overflow"<<endl;
                }
            }

            void push2(int element){
                if(top2-top1>1){
                    top2--;
                    arr[top2]=element;
                }
                else{
                    cout<<"Stack Overflow"<<endl;
                }
            }

            void pop1(){
                if(top1==-1){
                    cout<<"Stack Underflow"<<endl;
                }
                else{
                    top1--;
                }
            }

            void pop2(){
                if(top2==size){
                    cout<<"Stack Underflow"<<endl;
                }
                else{
                    top2++;
                }
            }


};
