// C++ program to find the 
// sum of natural numbers up
// to n using recursion
#include <iostream>
using namespace std;

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