#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=97;
    int y=81;
    int z=74;
    int res=(x+y+z)+(x++)+(++y)+(++z)+(x+y)+(++x)+(y++)+(--z)+(y+z)+(z+x)+(x+y+z)+(--z)-z-y-x;
    cout<<res;
}