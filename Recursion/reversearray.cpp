#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void reverse(vector<int> ans, int n,int i){
    if(i>=n/2){
        return;
    }
    swap(ans[i],ans[n-1-i]);
    reverse(ans,n,i+1);
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
    int i=0;
    reverse(ans,size,i);
    printArray(ans,size);
}
// void recfun(int i,int arr[],int n)
// {
//     if(i>=n/2)
//         return;

//     swap(arr[i],arr[n-1-i]);

//     recfun(i+1,arr,n);
// }

// int main()
// {
//     int arr[]={5,4,8,3,6,1};
//     recfun(0,arr,6);

//     for(int i=0;i<6;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

// }
