#include <iostream>  
using namespace std;  
void reverse(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(ch[s++],ch[e--]);
    }

}
void printarr(char ch[],int n){
    for(int i=0; i<n; i++){
        cout<<ch[i];
    }
}
int main(){
    char ch[100];
    cin>>ch;
    int count=0;
    for(int i=0; (ch[i] != '\0'); i++){
        count++;
    }
    int n= count;
    reverse(ch,n);
    printarr(ch,n);
}