//777A - Shell Game (codeforces)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,index,mod;
    string s;
    cin>>n>>index;
    if (n%6==1) s="102";
    else if (n%6==2) s="120";
    else if (n%6==3) s="210";
    else if (n%6==4) s="201";
    else if (n%6==5) s="021";
    else s="012";

    cout<<s[index];

    return 0;
}
