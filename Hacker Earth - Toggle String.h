//Hacker Earth - Toggle String

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {

        if(isupper(s[i]))
        {
            s[i]=tolower(s[i]);
            cout<<s[i];
        }
        else
        {
            s[i]=toupper(s[i]);
            cout<<s[i];
        }

    }
    return 0;
}
