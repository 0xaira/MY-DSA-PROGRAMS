// Maximum Area in the Histogram
#include <bits/stdc++.h>
using namespace std;
#include <Math.h>
void solve (int arr[], int N)
{
    stack<pair<int,int>> s;
    vector<int> left;
    int pseudo_index = -1;
    for(int i=0;i<N;i++)
    {
        if(s.size()==0)
            left.push_back(pseudo_index);
        else if(s.size()>0 && s.top().first<arr[i])
            left.push_back(s.top().second);
        else if(s.size()>0 && s.top().first>=arr[i])
        {
            while(s.size()>0 && s.top().first>=arr[i])
                s.pop();
            if(s.size()==0)
                left.push_back(pseudo_index);
            else
                left.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
while (!s.empty())
        s.pop();
    vector<int> right;
    pseudo_index = N;
    for(int i=N-1;i>=0;i--)
    {
        if(s.size()==0)
            right.push_back(pseudo_index);
        else if(s.size()>0 && s.top().first<arr[i])
            right.push_back(s.top().second);
        else if(s.size()>0 && s.top().first>=arr[i])
        {
            while(s.size()>0 && s.top().first>=arr[i])
                s.pop();
            if(s.size()==0)
                right.push_back(pseudo_index);
            else
                right.push_back(s.top().second);
        }
        s.push({arr[i],i});
    }
    reverse(right.begin(),right.end());

    int width[N];
    for(int i=0;i<N;i++)
        width[i] = right[i]-left[i]-1;
    
    int area[N];
    for(int i=0;i<N;i++)
        area[i] = width[i]*arr[i];

    int max_area = INT_MIN;
    for(int i=0;i<N;i++)
        max_area = max(max_area,area[i]);

    cout<<max_area<<endl;
}

int main()
{
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    solve(arr, N);

    return 0;
}