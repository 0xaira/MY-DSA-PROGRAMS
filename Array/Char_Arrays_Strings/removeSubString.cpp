#include <iostream>
#include <string>
using namespace std;
int main(){
      string str;
      cin>>str;
      string subStr;
      cin>>subStr;
      while(str.length()!=0 && str.find(subStr) < str.length() ){
        str.erase(str.find(subStr), subStr.length());
      }
      cout<<str;
}