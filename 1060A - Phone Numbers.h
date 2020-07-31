//1060A - Phone Numbers
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    string s;
    int cnt8=0,ans=0;
    cin>>n>>s;
    int num=n/11;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='8') cnt8++;
    }

    while(cnt8 && num)
    {
            num--;
            cnt8--;
            ans++;
    }

    cout<<ans;
    return 0 ;
}
