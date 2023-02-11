#include <iostream>
using namespace std;

int peakIndex( int*arr, int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
        start=mid+1;
        }
        else {
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return arr[start];
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
    cout<<peakIndex(arr, size)<<endl;
    
}