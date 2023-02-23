#include<bits/stdc++.h>

using namespace std;


bool checkin(vector<int>&z,vector<int>&x){

 if(z[0]+z[1]==x[0]+x[1]){
 return z[0]<x[0];    
 }
 else{
 return z[0]+z[1]<x[0]+x[1];
 }
}


void res(){

 int nums,kp;
 cin>>nums>>kp;


 vector<int>z(nums),x(nums);
 for(int i=0;i<nums;i++){


 cin>>z[i];
 }

 for(int i=0;i<nums;i++){
 cin>>x[i];
 }

 vector<vector<int>>y;

 for(int i=0;i<nums;i++){
 y.push_back({z[i],x[i]});
 }

 sort(y.begin(),y.end(),checkin);


 int maxi=0;
 int sum=0;

 int i=0;
 while(i<nums){
 if(y[i][0]+y[i][1]+sum<=kp){
 sum+=y[i][0]+y[i][1];
 maxi=max(maxi,y[i][1]);
 i++;
 }
else{
break;
 }
 }

 vector<int>mn(nums);

 for(int kp=nums-1;kp>=0;kp--){
 if(kp==nums-1){
 mn[kp]=y[kp][0];
 }
 else{
 mn[kp]=min(mn[kp+1],y[kp][0]);
 }
 }

 int ans=i;


 if(i<nums){

 int rem=kp-sum;
 if(mn[i]<=rem)ans++;
 else if(rem+maxi>=y[i][0]+y[i][1]){ans++;}
 }

 cout<<ans<<endl;


 
}
 




int main(){
 int t;
 cin>>t;

 while(t--){
 res();
 }
}