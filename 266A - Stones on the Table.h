/*
    266A - Stones on the Table (Codeforces)
    Naser Dakhel
    3/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string colors;
    int len,cnt = 0;
    cin>>len>>colors;
    char prev;
    prev = colors[0];

    for (int i=1;i<len;i++)
    {
        if (prev == colors[i])
        {
            cnt++;
        }
        else
            prev=colors[i];
    }

    cout<<cnt;
    return 0;
}
