#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int cnt=0,n;
    bool p,v,t;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>p>>v>>t;
        if(p+v+t>=2) cnt++;
    }

   cout<<cnt;
   return 0 ;
}