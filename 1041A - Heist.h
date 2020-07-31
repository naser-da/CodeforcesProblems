//1041A - Heist
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   int a[1001];
   int ans=0,temp;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

   sort(a,a+n);
   temp = a[n-1]-a[0];
   if (temp=a.size()) cout<<ans;
   else 
   {
	   ans= temp - a.size();
	   cout<<ans;
   }

    return 0;
}
