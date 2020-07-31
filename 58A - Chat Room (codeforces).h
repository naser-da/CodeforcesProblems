//58A - Chat Room (codeforces)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="hello",st;
    int j=0;
    cin>>st;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]==s[j])j++;
    }

    if (j==5) cout <<"YES";
    else cout<<"NO";

    return 0;
}
