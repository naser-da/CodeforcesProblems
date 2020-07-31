#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int cnt1=0,cnt0=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1')
        {
            cnt1++;
            cnt0=0;
        }
        else
        {
            cnt0++;
            cnt1=0;

        }
        if(cnt1==7||cnt0==7)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0 ;

}
