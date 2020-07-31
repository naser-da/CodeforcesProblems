//Bachgold Problem -794A
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int a[50001];
    int ans=0;
    int i=0;
          while (n)
    {

        if(n%2==0 )
        {
            n-=2;
            a[i]=2;
        }
        else
        {
            n-=3;
               a[i]=3;

        }
        ans++;
        i++;
    }
    cout<<ans<<endl;
    for(int j=0;j<i;j++)
    {
        cout<<a[j]<<" ";
    }

    return 0 ;
}
