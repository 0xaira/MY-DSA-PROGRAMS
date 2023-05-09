#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int>& output, int index, int k, int n) {
        if(n < 0 || output.size() > k) return;
        if(n == 0 && output.size() == k) {
            ans.push_back(output);
            return;
        }
        
        for(int i=index; i<=9; ++i) {
            output.push_back(i);
            solve(output, i+1, k, n-i);
            output.pop_back();
        }
    }   
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> output;
        solve(output, 1, k, n);
        return ans;
    }
};