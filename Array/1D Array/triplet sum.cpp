#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int triplet(int *arr, int size, int key){

sort(*arr.begin(),*arr.end());
for (int i = 0; i < size; i++)
	{
         int left=i+1;
         int right=size-1;
        
        while(left<right){
            int sum= arr[i]+arr[left]+arr[right];
            if(sum==key){
                cout << arr[i] << " " << arr[left] <<" "<<arr[right]<< endl;
            }
            else if(sum>0){
                right--;
            }
            else{
                left++;
            }
        }
       
    }
    return 0;

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