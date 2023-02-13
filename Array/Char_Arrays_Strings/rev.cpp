#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
void reverse(string& s,int n){
    int st=0;
    int e=n;
    while(st<e){
        swap(s[st++],s[e--]);
    }

}
// void printarr(string s,int n){
//     for(int i=0; i<n; i++){
//         cout<<s[i];
//     }
// }
int main(){
    string s;
    cin>>s;
    
    int n= s.length()-1;
    reverse(s,n);
    cout<<s;
}