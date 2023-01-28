#include <iostream>  
using namespace std;  

void reverseArray(int arr[], int size){
    int i= 0;
    int j= size-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    reverseArray(arr,size);
    printArray(arr,size);
}