#include <bits/stdc++.h>
using namespace std;
// Write any include statements here
#define ll long long
ll sum(int N, ll a, ll b)
{
    if (b > a)
    {
        return min(b - a, N - b + a);
    }
    else
    {
        return min(a - b, N - a + b);
    }
}
long long getMinCodeEntryTime(int N, int M, vector<int> C)
{
    // Write your code here
    ll start = 1, ans;
    for (int i = 0; i < C.size(); i++)
    {

        ans = ans + sum(N, C[i], start);
        start = C[i];
    }

    return ans;
}
