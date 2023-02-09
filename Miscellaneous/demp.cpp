#include<bits/stdc++.h>
using namespace std;

void result(){
    int num;
    cin>>num;
    int point=1;
    vector<int>arr;
    map<int, int>mp;
    int notsec;
    for(int i=0; i<num; i++){
      cin>>notsec;
      arr.push_back(notsec);
    }
    sort(arr.begin(),arr.end());
    reverse(arr.begin(),arr.end());
    for(int i=0; i<num;i++){
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(it.second%2){
            point=0;
            break;
        }
    }
    if(point)
    cout<<"Zenyk"<<endl;
    else{
        cout<<"Marichka"<<endl;
    }
}
int main() {
	
	int test;
	cin>>test;
	while(test--){
	    result();
	}
	return 0;
}
