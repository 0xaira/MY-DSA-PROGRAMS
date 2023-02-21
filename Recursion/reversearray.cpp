#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void reverse(vector<int> ans, int size){
    int i= 0;
    int j= size-1;
    while(i<j){
        swap(ans[i],ans[j]);
        i++;
        j--;
    }
}
void printArray(vector<int> ans, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}
int main(){
    vector<int> ans;
    int size;
    cin>>size;
	
	for (int i = 0; i < size; i++)
	{   
        int x;
        cin>>x;
        ans.push_back(x);
	}
    reverse(ans,size);
    printArray(ans,size);
}