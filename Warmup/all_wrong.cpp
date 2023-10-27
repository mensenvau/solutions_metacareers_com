// https://www.metacareers.com/profile/coding_puzzles/?puzzle=1082217288848574
#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

string getWrongAnswers(int N, string C)
{
    // Write your code here

    for (int i = 0; i < N; i++)
    {
        if (C[i] == 'A')
            C[i] = 'B';
        else
            C[i] = 'A';
    }

    return C;
}
