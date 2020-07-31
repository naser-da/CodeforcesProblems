/*
    282A - Bit++ (Codeforces)
    Naser Dakhel
    2/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, val = 0;
    string op;

    cin>>n;

    for (int i=0; i<n; i++)
    {
        cin>>op;
        if (op[1]=='-')
            val--;
        else if (op[1]=='+')
            val++;
    }

    cout<<val;
    return 0;
}
