//16D - Good Substrings
#include <bits/stdc++.h>
using namespace std;

good(char c,string s)
{
    bitset <26> G( s ) ;
    return ( ( (bitset <26>) 1<<( 26-( c-'a'+1 ) ) & G ).any() ) ;
}
int main()
{
    string s,b;
    int k, bad=0;
    set <string> ans;

    cin>>s;
    cin>>b;
    cin>>k;

    int n=s.size();
    for(int i=0; i<n; i++)
    {
        bad=0;
        for(int j=i; j<n; j++)
        {
            if(!good(s[j],b)) bad++;
            if(bad>k) break;
            ans.insert(s.substr(i,j-i+1));
            
        }
    }
    cout<<ans.size();
    return 0;
}
