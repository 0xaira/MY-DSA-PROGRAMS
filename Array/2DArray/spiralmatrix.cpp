#include<iostream>
using namespace std;
#include<bits/stdc++.h>
 vector<int> spiralOrder(int matrix, int row, int col) {
        
        
        vector<int> ans;
        // int row = matrix.size();
        // int col = matrix[0].size();
        
        int count = 0;
        int total = row*col;
        
        //index initialisation
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = row-1;
        int endingCol = col-1;
        
        
        while(count < total) {
            
            //print starting row
            for(int index = startingCol; count < total && index<=endingCol; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            //print ending column
            for(int index = startingRow; count < total && index<=endingRow; index++) {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            //print ending row
            for(int index = endingCol; count < total && index>=startingCol; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //print starting column
            for(int index = endingRow; count < total && index>=startingRow; index--) {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        } 
        return ans;
}
int main(){
    int arr[4][4];
    
	for (int row = 0; row < 4; row++)
	{
        for(int col=0; col<4;col++){
            cin >> arr[row][col];
        }
		
	}
    spiralOrder(arr,4,4);
}

        
