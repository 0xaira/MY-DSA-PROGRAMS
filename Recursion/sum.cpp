#include <iostream>
using namespace std;
int cSum(int arr[], int size)
{
   
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }
    int rp = cSum(arr + 1, size - 1);
    int sum = arr[0] + rp;
    return sum;
}
int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int ans = cSum(arr, size);
    cout << ans;
}