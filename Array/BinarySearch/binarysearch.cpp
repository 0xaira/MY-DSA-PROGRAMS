#include <iostream>
using namespace std;
void binarySearch(int *arr, int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(key==arr[mid]){
            cout<<"element found at index"<<endl<<arr[mid-1];
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid = start + (end - start)/2;
    }
    
}
// void printArray(int arr[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i];
//     }
// }
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
    binarySearch(arr, size, key);
    // printArray(arr, size);
}