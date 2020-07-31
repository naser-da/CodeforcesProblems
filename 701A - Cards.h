//701A - Cards
#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n,sum=0;
   int a[101];
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       sum+=a[i];
   }
    if(n==2) {
        cout<<"1 2";
        return 0;
    }
    const int sc = (sum*1.0/n)*2;
    int cnt=0;
   for(int i=0;i<n;i++)
   {
       for(int j=n-1;j>0;j--)
       {
          if(cnt==n/2) return 0 ;
           if(a[i]+a[j]==sc)
           {
               a[i]=0;
               a[j]=0;
               cout<<i+1<<" "<<j+1<<endl;
               cnt++;
               break;
           }
       }
   }

    return 0 ;
}
