#include<iostream>
using namespace std;
int search(int arr[2][3],int row,int col){
    for (int row = 0; row < 2; row++)
	{
        int sum=0;
        for(int col=0; col<3;col++){
            sum+=arr[row][col];   
        }
        cout<<sum<<" ";
		
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
    search(arr,2,3);
}