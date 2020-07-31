//609A - USB Flash Drives
#include<bits/stdc++.h>
using namespace std;
int main ()
{
   int n;
   int m;
   vector <int> v;
   int ans=0;
   cin>>n>>m;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       v.push_back(x);
   }

   sort(v.begin(),v.end());
    int i=n-1;
   while(m>0)
   {

       m-=v[i];
       i--;
       ans++;

   }

    cout<<ans;

    return 0 ;
}
