// Print like a wave
#include<iostream>
using namespace std;
#include<bits/stdc++.h>

vector<int> wave(int arr[2][3],int row,int col){
    vector<int> ans;
    for (int c = 0; c < col; c++)
	{
        if(c&1){
           for(int r=row-1;r>=0;r--){
               ans.push_back(arr[r][c]);
           }
           
        }
        else{
             for(int r=0;r<row;r++){
               ans.push_back(arr[r][c]);
           }
        }
        	
	}
    for (int i = 0; i < ans.size(); i++)
	{
        cout<<ans[i]<<" ";
		
	}
    cout<<endl;
    
}
int main(){
    int arr[2][3];
    
	for (int row = 0; row < 2; row++)
	{
        for(int col=0; col<3;col++){
            cin >> arr[row][col];
        }
		
	}
    wave(arr,2,3);
    
}