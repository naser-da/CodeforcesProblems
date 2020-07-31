//Fafa and his Company
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,temp;
    int ans=0;
    cin>>n;
    temp=n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0) ans++;
        else continue;
    }
    cout<<ans;

    return 0 ;
}



