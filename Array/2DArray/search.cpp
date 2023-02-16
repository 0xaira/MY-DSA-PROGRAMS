#include<iostream>
using namespace std;
int search(int arr[2][3],int target,int row,int col){
    for (int row = 0; row < 2; row++)
	{
        for(int col=0; col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
           
        }
		
	}
    return 0;
}
int main(){
    int arr[2][3];
    
	for (int row = 0; row < 2; row++)
	{
        for(int col=0; col<3;col++){
            cin >> arr[row][col];
        }
		
	}
    int target;
    cin>>target;
    if(search(arr,target,3,4)){
    cout<<"Target Found";
    }
     else{
     cout<<"Target Not Found";
     }
}