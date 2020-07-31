/*
    546A - Soldier and Bananas (Codeforces)
    Naser Dakhel
    3/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int first,money,total,cost=0,ans;
    cin>>first>>money>>total;

    for (int i=1; i<=total; i++)
    {
        cost+=first*i;
    }
    if (money > cost)
        ans = 0;
    else
        ans = cost - money;
    cout<<ans;
    return 0;
}
