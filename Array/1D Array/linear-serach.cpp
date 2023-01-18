#include<iostream>
using namespace std;
bool search(int n,int key,int arr[]){
     for(int i=0;i<=n;i++){
        if(arr[i]==key){
            return true;
        }
     }
        
            return false;
        
     
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x= search(n,key,arr);
    if(x){
        cout<<"Element Present"<<endl;
    }
    else{
        cout<<"Element not Present"<<endl;
    }
    
}