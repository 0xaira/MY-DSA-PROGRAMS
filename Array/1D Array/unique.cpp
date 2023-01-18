#include <iostream>
using namespace std;
int main()
{
	
		int size;
		cin >> size;
        int ans=0;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		
		for (int i = 0; i < size; i++)
		{
			ans= ans^arr[i];
            
		}
		cout << ans << " ";
		
}