#include <iostream>
using namespace std;
int main()
{
	
		int size;
		cin >> size;
        int key;
        cin>>key;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		
		for (int i = 0; i < size; i++){
			for (int j = i+1; i < size; i++){
			      if(arr[i]+arr[j]==key){
                    cout<<arr[i]<<" "<<arr[j]<<endl;
                  }
            
		}
            
		}
		
		
}