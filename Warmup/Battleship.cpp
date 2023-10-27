#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

double getHitProbability(int R, int C, vector<vector<int>> G)
{
    // Write your code here
    int count = 0;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (G[i][j] == 1)
                count++;
        }
    }

    return count / (R * C * 1.0);
}
