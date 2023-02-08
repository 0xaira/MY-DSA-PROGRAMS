#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        while (n > 0)
        {
            s.pop_back();
            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }
            int st = 0;
            int e = n - 1;
            while (st < e)
            {
                if (s[st] != s[e])
                {
                    return 0;
                }
                else
                {
                    st++;
                    e--;
                }
                return 1;
            }
            if(1){}
        }
    }
}