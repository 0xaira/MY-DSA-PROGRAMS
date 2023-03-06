using namespace std;
#include <bits/stdc++.h>
bool checkSort(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        int ans= checkSort(arr+1,size-1);
        return ans;
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
   checkSort(arr,size);
   if(checkSort(arr,size)){
    cout<<"Sorted";
   }
   else{
    cout<<"Not Sorted";
   }
}