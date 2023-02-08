#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i = 0, n = s.length();
        for (int j = 0; j < n; ++j, ++i) {
            s[i] = s[j];
            if (i > 0 && s[i - 1] == s[i]) 
                i -= 2;
        }
   cout<<s.substr(0, i);
}
