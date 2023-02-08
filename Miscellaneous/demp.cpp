#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 100000007
#define SIZE 1e6+2 


void result(){
    ll num;
    cin>>num;
    string str;
    cin>>str;
    map<char, ll>mp;
    for(auto i:str) mp[i]++;
    for(auto i:mp){
        if(i.second>1){
            cout<<num-2<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
int main() {
	
	ll test;
	cin>>test;
	while(test--){
	    result();
	}
	return 0;
}
