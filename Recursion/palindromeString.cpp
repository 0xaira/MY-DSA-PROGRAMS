// #include<bits/stdc++.h>
// using namespace std;
// void reverse(string& s,int n,int st,int e){
//     if(st>e ){
//         return;
//     }
//     swap(s[st++],s[e--]);
//     reverse(s,n,st,e);
    

// }
// int main(){
//     string s;
//     cin>>s;
//     string temp=s;
//     int n= s.length()-1;
//     int st=0;
//     int e=n;
//     reverse(s,n,st,e);
//     if(temp==s){
//         cout<<"Palindrome";
//     }
//     else{
//         cout<<"Not Palindrome";
//     }
//     // cout<<s;
// }
#include<bits/stdc++.h>
using namespace std;
bool reverse(string& s,int st,int e){
    if(st>e ){
        return true;
    }
    if(s[st]!=s[e]){
        return false;
    }
    else{
       return reverse(s,st+1,e-1);
    }
}
int main(){
    string s;
    cin>>s;
    string temp=s;
    int n= s.length()-1;
    int st=0;
    int e=n;
    bool res=reverse(s,st,e);
    if(res){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}