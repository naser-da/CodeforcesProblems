#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,m;
    int a[101];
    int curr_pass=0,n_bus=1;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<= m-curr_pass) {
            curr_pass+=a[i];
        }
        else n_bus++;
    }
        cout<<n_bus;
    return 0 ;
}
