#include <iostream>  
using namespace std;
string main(){
    string s;
    cin>>s;
    int l,r=0;
    while(l<s.size()){
       while(r<s.size() && s[r] !=' '){
        r++;
       }
       reverse(s.begin()+l , s.begin()+r);
       l=r+1;
       r=l;
    }
    return s;
 }
