#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

	int key;
	cin >> key;
    vector<int> ans;
    int size;
    cin>>size;
	
	for (int i = 0; i < size; i++)
	{   
        int x;
        cin>>x;
        ans.push_back(x);
	}
    sort(ans.begin(),ans.end());
  
    for (int i = 0; i < size; i++)
	{
         int left=i+1;
         int right=size-1;
        
        while(left<right){
            int sum= ans[i]+ans[left]+ans[right];
            if(sum==key){
                cout << ans[i] << " " << ans[left] <<" "<<ans[right]<< endl;
                // cout<<"Triplet Found";
                left++;
                right--;
            }
            else if(sum>key){
                right--;
            }
            else{
                left++;
            }
        }
       
    }

	
}