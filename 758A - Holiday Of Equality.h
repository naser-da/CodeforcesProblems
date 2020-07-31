//758A - Holiday Of Equality
#include<bits/stdc++.h>
using namespace std;

int main() {
    int ans=0,n,biggest=-1;
    int a[102];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>biggest) biggest=a[i];
    }

    for(int i=0;i<n;i++)
    {
        ans+=biggest-a[i];
    }

    cout<<ans;
    return 0;
}
