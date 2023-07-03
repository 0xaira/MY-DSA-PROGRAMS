#include <bits/stdc++.h>
using namespace std;
void Solve(stack<int> &inputStack, int N, int count)
{
    if (count == N / 2)
    {
        inputStack.pop();
        return;
    }
    int flag = inputStack.top();
    inputStack.pop();
    Solve(inputStack, N, count + 1);
    inputStack.push(flag);
}
void deleteMiddle(stack<int> &inputStack, int N)
{
    int count = 0;
    Solve(inputStack, N, count);
}

