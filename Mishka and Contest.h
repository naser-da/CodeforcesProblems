#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,k,lcnt=0,rcnt=0;
    int a[101];
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        }
    for(int i=0; i<n; i++)
    {

        if(a[i]<=k)
            lcnt++;
        else
            break;
    }
    for(int j=n-1; j>lcnt; j--)
    {
        if(a[j]<=k)
            rcnt++;
        else
            break;
    }

    cout<<lcnt+rcnt;
    return 0 ;
}
