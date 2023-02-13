#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> find(vector <int> &arr){
        int n=arr.size();
        sort(arr.begin(),arr.end());
        vector <int> ans;
        for(int i=1;i<=n-1;i++){
            if(arr[i]==arr[i-1]){
                ans.push_back(arr[i]);
            }
        }
        return ans;

 }
int main(){
    vector <int> arr;
    vector<int>a=find(arr);
    

}