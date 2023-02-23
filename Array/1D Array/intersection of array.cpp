#include<iostream>
using namespace std;
#include <vector>;
vector<int> intersectionArray(int *arr1, int s1, int *arr2, int s2){
    vector<int>ans;
    int i,j=0;
    while(i<s1 && j<s2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;j++;
        }
          else if(arr1[i]<arr2[j]){
            
            i++;
        }
        else{
            j++;
        }
    }
     for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }   
}
int main(){
        int size;
		cin >> size;
		int *arr1 = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr1[i];
		}
        int size2;
		cin >> size2;
		int *arr2 = new int[size2];
		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}
        intersectionArray(arr1,size,arr2,size2);

}