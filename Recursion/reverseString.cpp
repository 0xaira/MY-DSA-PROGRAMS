#include<bits/stdc++.h>
using namespace std;
void reverse(string& s,int n,int st,int e){
    if(st>e ){
        return;
    }
    swap(s[st++],s[e--]);
    reverse(s,n,st,e);
    

}
int main(){
    string s;
    cin>>s;
    int n= s.length()-1;
    int st=0;
    int e=n;
    reverse(s,n,st,e);
    cout<<s;
}