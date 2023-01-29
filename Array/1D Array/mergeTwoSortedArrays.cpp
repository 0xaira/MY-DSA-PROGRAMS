#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    while (i < n1)
        arr3[k++] = arr1[i++];

    while (j < n2)
        arr3[k++] = arr2[j++];
}

void printArray(int arr3[],int a )
{
    for (int i = 0; i < a; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}
int main()
{

    int n;
    cin>>n;
    int *arr1 = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int m;
    cin>>m;
    int *arr2 = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    int a=m+n;
    int *arr3 = new int[a];
    mergeArrays(arr1,  arr2,  n,  m,  arr3);
    printArray( arr3, a );
}
