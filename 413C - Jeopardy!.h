//413C - Jeopardy!

#include <bits/stdc++.h>
using namespace std;
int main()
{
    typedef long long int ll;

    ll n,m,ans,sum,mx;
    ll a[105],b[105];

    cin>>n>>m;
    for ( int i=0; i<n; i++ )
        cin>>a[i];
    for ( int i=0; i<m; i++ )
        cin>>b[i];

    mx=0;
    for ( int i=0; i<n; i++ )
        mx=max( mx, a[i] );

    for ( int i=0; i<m; i++ )
        a[ b[i]-1 ]=0;

    sum=0;
    for ( int i=0; i<n; i++ )
        sum+=a[i];
    if ( sum>=mx )
        ans=sum*( 1<<m );
    else
        ans=( mx+sum ) * ( 1<<( m-1 ) );

    cout<<ans<<"\n";

	return 0;
}

