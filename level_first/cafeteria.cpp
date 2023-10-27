#include <bits/stdc++.h>
using namespace std;
// Write any include statements here ///
#define ll long long

long long getMaxAdditionalDinersCount(long long N, long long K, int M, vector<long long> S)
{

    sort(S.begin(), S.end());

    ll open, sum = 0, first = 1;
    for (int i = 0; i < S.size(); i++)
    {
        open = S[i] - K - first;
        if (open > 0)
            sum += ceil(1.0 * open / (K + 1));
        first = S[i] + K + 1;
    }

    open = N + 1 - first;
    if (open > 0)
        sum += ceil(1.0 * open / (K + 1));

    return sum;
}
