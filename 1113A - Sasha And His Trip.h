//1113A - Sasha And His Trip
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,v;
    int left,ans;
    cin>>n>>v;
    if(v>=n)
    {
        cout<<n-1;
        return 0;
    }

    else
    {
        left=n-1;
        ans=v;
        int i=2;
        while(true)
        {
            if(left>v)
            {
                ans+=i;
                left--;
                i++;
            }
            else
            {
                cout<<ans;
                return 0;
            }
        }

    }


    return 0;
}
