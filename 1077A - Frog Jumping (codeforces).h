//1077A - Frog Jumping (codeforces)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a,b,k,ans;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b>>k;
        if(k%2==0)
        {
            ans=(a*(k/2))-(b*(k/2));
        }
        else
        {
           ans=(a*(k/2))-(b*(k/2))+a;
        }

        cout<<ans<<endl;
    }

    return 0;
}
