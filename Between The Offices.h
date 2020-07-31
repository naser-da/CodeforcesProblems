//Between The Offices
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    int n;
    int nsf=0,nfs=0;
    cin>>n>>s;
    for(int i=0; i<=n-2; i++)
    {
        string temp = s.substr(i,2);
        if(temp=="SF") nsf++;
        else if (temp=="FS") nfs++;
    }
    if(nsf>nfs) cout<<"YES";
    else cout<<"NO";
    return 0;
}

