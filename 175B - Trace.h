//175B - Trace
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[1001];
    double  pi=3.1415926536;
    double  ans=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=n-1;i>=1;i-=2)
    {
            ans+=(a[i]*a[i])-(a[i-1]*a[i-1]);
    }

    if(n%2!=0) ans+=a[0]*a[0];

    cout<<ans*pi;
    return 0;
}
