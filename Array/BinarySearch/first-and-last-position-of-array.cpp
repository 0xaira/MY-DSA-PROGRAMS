#include <iostream>
using namespace std;
int firstPosition(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans=-1;
    while(start<end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}
int lastPosition(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans=-1;
    while(start<end){
        if(key==arr[mid]){
            ans=mid;
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
    
}
int main()
{

    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin>>key;
    cout<<firstPosition(arr, size, key)<<endl;
    cout<<lastPosition(arr, size, key)<<endl;
    
}