/*
    116A - Tram (Codeforces)
    Naser Dakhel
    3/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,exits,enters,ans=0,current=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>exits>>enters;
        current += enters-exits;
        if(current > ans)
            ans = current;
    }

    cout<<ans;

    return 0;
}
