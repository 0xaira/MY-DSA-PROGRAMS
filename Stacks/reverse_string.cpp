// Reverse a String using Stack

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0;i<s.length();i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
    return 0;
}