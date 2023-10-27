#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

int getMinProblemCount(int N, vector<int> S)
{
    // Write your code here

    int isOdd = 0;
    int mx = INT_MIN;

    for (int i = 0; i < S.size(); i++)
    {
        mx = max(mx, S[i]);
        if (S[i] % 2 == 1)
            isOdd = 1;
    }

    int ans = 0;
    if (mx % 2 == 0)
        ans = mx / 2;
    else
        ans = mx / 2 + 1;

    if (isOdd == 1)
    {
        if (mx % 2 == 0)
        {
            ans += 1;
        }
    }

    return ans;
}
