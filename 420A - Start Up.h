//420A - Start Up

#include <bits/stdc++.h>
using namespace std;

bool ismirror ( char );
int main()
{
    string s;
    bool mirror;
    int n,l,r;


    cin>>s;
    n=s.length();

    l=0;    r=n-1;  mirror=1;
    while ( l<=r )
    {
        if ( s[r]==s[l] && ismirror( s[r] ) )
        {
            r--;
            l++;
            continue;
        }
        mirror=0;
        break;
    }

    cout<<( ( mirror )? "YES": "NO" )<<"\n";

	return 0;
}

bool ismirror ( char c )
{
    int n;
    string s="AHIMOTUVWXY";
    n=s.length();
    for ( int i=0; i<n; i++ )
        if ( c==s[i] )
            return true;
    return false;
}

