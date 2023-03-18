// // C++ program to find the 
// // sum of natural numbers up
// // to n using recursion
#include <iostream>
using namespace std;
// int sum(int n) {
//    if(n == 0)
//    return n;
//    else
//    return n + sum(n-1);
// }
// int main() {
//    int n;
//    cin>>n;
//    cout<<"Sum of first "<<n<<" natural numbers is "<<sum(n);
//    return 0;
// }

int recurSum(int n)
{
    if (n <= 1)
        return n;
    int a= n + recurSum(n - 1);
    return a;
}

int main()
{
    int n;
    cin>>n;
    cout << recurSum(n);
    return 0;
}


