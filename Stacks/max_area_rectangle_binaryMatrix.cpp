//Max Area Rectangle in Binary Matrix 
//Transforming the matrix into histogram and then applying the above code
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int N)
{
    stack<pair<int, int>> s;
    vector<int> v;
    int psuedo_index = -1;
    for (int i = 0; i < N; i++)
    {
        if (s.empty())
            v.push_back(psuedo_index);
        else if (s.top().first < arr[i])
            v.push_back(s.top().second);
        else if (s.top().first >= arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
                s.pop();
            if (s.empty())
                v.push_back(psuedo_index);
            else
                v.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }
    while (!s.empty())
        s.pop();
    psuedo_index = N;
    vector<int> v1;
    for (int i = N - 1; i >= 0; i--)
    {
        if (s.empty())
            v1.push_back(psuedo_index);
        else if (s.top().first < arr[i])
            v1.push_back(s.top().second);
        else if (s.top().first >= arr[i])
        {
            while (!s.empty() && s.top().first >= arr[i])
                s.pop();
            if (s.empty())
                v1.push_back(psuedo_index);
            else
                v1.push_back(s.top().second);
        }
        s.push({arr[i], i});
    }
    reverse(v1.begin(), v1.end());
    int max_area = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        int area = (v1[i] - v[i] - 1) * arr[i];
        max_area = max(max_area, area);
    }
    cout << max_area << endl;
}

