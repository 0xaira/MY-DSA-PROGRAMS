#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPossible(int arr[], int size, int stcount,int mid)
{
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<size;i++){
        if(pageSum+arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>stcount || arr[i]>mid){
                return false;
            }
            pageSum+=arr[i];
            
        }
    }
    return true;
    
}
int main(){
    int size;
    cin >> size;
    int *arr = new int[size];
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
     for (int i = 0; i < size; i++)
    {
        sum+= arr[i];
    }
    int start = 0;
    int end = sum;
    int mid = start + (end - start);
    int ans=0;
    int stcount;
    cin>>stcount;
    
        if(isPossible(arr,size,stcount,mid)){
            ans=mid;
            end=mid-1;
           
        }
        else{
             start=mid+1;
        }
        mid = start + (end - start);
    cout<<mid;
}
