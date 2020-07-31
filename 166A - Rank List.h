//166A - Rank List
#include <bits/stdc++.h>
using namespace std;
int main()
{
  pair <int,int> p[51];
   int k,n,cnt=0;
   cin>>n>>k;
   for(int i=0;i<n;i++)
   {
       cin>>p[i].first>>p[i].second;
       p[i].first*=-1;
   }

   sort(p,p+n);

   for(int i=0;i<n;i++)
   {
       if(p[k-1]==p[i]) cnt++;
   }

   cout<<cnt;

    return 0 ;
}
