using namespace std;
#include <bits/stdc++.h>
void printNum(int n){
     if(n==0){
        return;
     }
    cout<<n<<endl;
    printNum(n-1);   
}
int main(){
   int n;
   cin>>n;
   printNum(n);
   return 0;
}