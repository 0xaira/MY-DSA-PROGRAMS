#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void Sort(int *array, int size){
   int i=0;
   int j=size-1;
   while(i<j){
	while(array[i]==0 && i<j){
		i++;
	}
	while(array[j]==1 && i<j){
        j--;
	}
	if( i<j){
		swap(array[i],array[j]);
		i++;
		j--;
	}
   }
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
    Sort(arr,size);
	for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
	cout << endl;

	
}