using namespace std;
#include <bits/stdc++.h>
bool binarySearch(int arr[],int start,int end, int key){
    
    if(start>end ){
        return -1;
    }
    int mid = start + (end - start)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
      
}
int main(){
   int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin>>key;
    int start=0;
    int end=size;
    
   binarySearch(arr,size,end,key);
   if(binarySearch(arr,start,end,key)){
    cout<<"Key Found";
   }
   else{
    cout<<"Key not Found";
   }
}