//calculating function-486A
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,ans;
    cin>>n;
    if(n%2==0)
    {
        ans=n/2;
    }
    else
    {
        ans=-((n/2)+1);
    }

        cout<<ans;
    return 0 ;
}
