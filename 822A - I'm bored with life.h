//822A - I'm bored with life
#include<bits/stdc++.h>
using namespace std;
long long fact (int x)
{
    if (x==1)
        return 1;
    else
        return x*fact(x-1);
}
int main ()
{
    int a,b,c;
    cin>>a>>b;
    c=min(a,b);
    cout<<fact(c);
    return 0 ;
}
