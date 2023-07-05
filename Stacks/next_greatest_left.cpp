//Next greatest to Left in the array using stack
#include <bits/stdc++.h>
using namespace std;

void Solve(int arr[], int N)
{
    stack<int> s;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        if (s.empty())
            v.push_back(-1);
        else if (s.top() > arr[i])
            v.push_back(s.top());
        else if (s.top() <= arr[i])
        {
            while (!s.empty() && s.top() <= arr[i])
                s.pop();
            if (s.empty())
                v.push_back(-1);
            else
                v.push_back(s.top());
        }
        s.push(arr[i]);
    }
    for (int i = 0; i < N; i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    Solve(arr, N);
    return 0;
}