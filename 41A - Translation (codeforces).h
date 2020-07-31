//41A - Translation (codeforces)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if (s1.length()!=s2.length())
    {
        cout<<"NO";
        return 0;
    }

    else
    {
        for(int i=0,j=s2.length()-1; i<s1.length(); i++,j--)
        {
            if(s1[i]!=s2[j])
            {
                cout<<"NO";
                return 0;
            }
        }

    }

    cout<<"YES";

    return 0;
}
