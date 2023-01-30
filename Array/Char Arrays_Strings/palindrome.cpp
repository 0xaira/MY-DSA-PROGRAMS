#include <iostream>  
using namespace std;  
int reverse(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(ch[s]!=ch[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
        
    }
    return 1;

}
// void printarr(char ch[],int n){
//     for(int i=0; i<n; i++){
//         cout<<ch[i];
//     }
// }
int main(){
    char ch[100];
    cin>>ch;
    int count=0;
    for(int i=0; (ch[i] != '\0'); i++){
        count++;
    }
    int n= count;
    if(reverse(ch,n)){
        cout<<"PALINDROME";
    }
    else{
        cout<<"NOT PALINDROME";
    }
    // printarr(ch,n);
}