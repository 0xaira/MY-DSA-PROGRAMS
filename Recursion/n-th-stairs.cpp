#include <iostream>
using namespace std;
int stairs(int n)
{
    if (n< 0)
    {
        return 0;
    }

    if (n == 1)
    {
        return 1;
    }

    int b = stairs(n - 1) + stairs(n - 2);
    return b;
}
int main()
{
    int n;
    cin >> n;
    int ans = stairs(n);
    cout << ans;
}