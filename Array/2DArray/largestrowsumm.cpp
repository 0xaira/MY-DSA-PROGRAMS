
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int rowSum(int arr[2][3],int row,int col){
    vector<int> ans;
    int maxi=0;
    for (int row = 0; row < 2; row++)
	{
        int sum=0;
        for(int col=0; col<3;col++){
            sum+=arr[row][col];
            ans.push_back(sum);
              
        }	
	}
    for(int i=0;i<ans.size();i++){
        if(ans[i]>maxi){
            maxi=ans[i];
        }
    }
    cout<<maxi;
    
}
int main(){
    int arr[2][3];
    
	for (int row = 0; row < 2; row++)
	{
        for(int col=0; col<3;col++){
            cin >> arr[row][col];
        }
		
	}
    rowSum(arr,2,3);
}