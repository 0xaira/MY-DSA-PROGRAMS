#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool triplet(int arr[], int size, int key){
int left;
int right;
sort(arr,arr+size);
for (int i = 0; i < size-2; i++)
	{
         left=i+1;
         right=size-1;
        
        while(left<right){
            int sum= arr[i]+arr[left]+arr[right];
            if(sum==key){
                // cout << arr[i] << " " << arr[left] <<" "<<arr[right]<< endl;
                return true;
                // left++;
                // right--;
            }
            else if(sum>0){
                right--;
            }
            else{
                left++;
            }
        }
       
    }
    return false;

}
int main()
{
    int size;
	cin >> size;
	int key;
	cin >> key;
	int *arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
    triplet(arr,size,key);

	
}