#include <iostream>
using namespace std;

void result(){
	int a;
	cin>>a;
	int arr[a];
	for (int i=0; i<a; i++){
         cin>>arr[i];
	}
	int ctr=0;
	for (int i=0; i<a-1; i++){
        if((arr[i]%2==0 && arr[i+1]%2==0 )|| (arr[i]%2==1 && arr[i+1]%2==1 ) ){
			ctr++;
		}
	}
	cout<<ctr<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		result();
	}
	return 0;
}