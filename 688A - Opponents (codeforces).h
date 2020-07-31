//688A - Opponents (codeforces)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d,ans=0,temp=0;
    string s;
    cin>>n>>d;
    for(int i=0;i<d;i++)
    {
        cin>>s;
        for(int j=0;j<n;j++)
        {
            if(s[j]=='0')
            {
                temp++;
                if (temp>ans) ans=temp;
                break;
            }

            if(j==n-1) temp=0;
        }
    }

    cout<<ans;

    return 0;
}
