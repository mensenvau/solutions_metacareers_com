#include <bits/stdc++.h>
using namespace std;
// Write any include statements here
#define ll long long

void run(long long A, long long B, long long C, int x, ll &count)
{
    if (A <= C && C <= B)
    {
        count++;
    }

    if (C <= B)
    {
        run(A, B, C * 10 + x, x, count);
    }
}
int getUniformIntegerCountInInterval(long long A, long long B)
{
    // Write your code here
    ll count = 0;
    for (int i = 1; i < 10; i++)
    {
        run(A, B, i, i, count);
    }

    return count;
}
