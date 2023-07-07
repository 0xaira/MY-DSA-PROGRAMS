// Stock Span Problem using stack
#include <bits/stdc++.h>
using namespace std;


void Solve(int arr[], int N)
{
    stack <pair<int, int>> s;
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        if (s.empty())
            v.push_back(-1);
        else if (s.top().first > arr[i])
            v.push_back(s.top().second);
        else if (s.top().first <= arr[i])
        {
            while (!s.empty() && s.top().first <= arr[i])
                s.pop();
            if (s.empty())
                v.push_back(-1);
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }
    for (int i = 0; i < N; i++)
        cout << i - v[i] << " ";
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