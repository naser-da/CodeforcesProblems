//(UVa) 12068 - Harmonic Mean
#include <bits/stdc++.h>
using namespace std;
int main()
{
	typedef long long ll;
    ll N,S;
    cin>>S;
    for(int i=0; i<S; i++)
    {
        cin>>N;
        ll nu[10]= {0};
        ll n=0,m=0,x=1;
        for(int j=0; j<N; j++)
        {
            cin>>nu[j];
            x*=nu[j];
        }
        m=x*N;

        for(int j=0; j<N; j++)
        {
            n+=(x/nu[j]);
        }
        
        
        x=__gcd(m,n);
        m/=x;
        n/=x;
        
        cout<<"Case "<<i+1<<": "<<m<<'/'<<n<<endl;
    }
    return 0;
}
