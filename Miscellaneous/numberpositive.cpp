#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
int main(){
    int n;
    cin>>n;
    string str=to_string(n);
    if(str[0]=='-')
        cout<<"Negative";
    else
        cout<<"Positive";
}
};