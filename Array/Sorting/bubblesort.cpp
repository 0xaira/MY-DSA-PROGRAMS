#include <iostream>
using namespace std;

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

    for (int i = 1; i < size ; i++)
    {
        bool swapped=false;
        for (int j = 0; j < size-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                 swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    printArray(arr, size);
}
