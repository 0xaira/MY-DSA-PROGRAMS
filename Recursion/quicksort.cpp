//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    
    int i;
    for (i=0; i < size; i++){
        cout<<arr[i]<<endl;
    }

}

// } Driver Code Ends
class Solution
{

    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int count=0;
       for(int i=low+1;i<=high;i++){
           if(arr[i]<=pivot){
               count++;
           }
       }
       int pivotIndex=low+count;
       swap(arr[pivotIndex],arr[low]);
       int j=high;
       int i=low;
       while(i<pivotIndex && j>pivotIndex){
           while(arr[i]<=pivot){
               i++;
           }
           while(arr[j]>pivot){
               j--;
           }
           if(i<pivotIndex && j>pivotIndex){
               swap(arr[i++],arr[j--]);
           }
       }
       
       return pivotIndex;
    }
     public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low>=high){
            return;
        }
        int p =partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
        
    }
};


//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    cin>>T;
    while(T--){
    cin>>n;
    for(i=0;i<n;i++)
      cin>>arr[i];
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends