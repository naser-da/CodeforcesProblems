//939B - Hamster Farm (codeforces)
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int k;
   long long n,temp,index,mini;
   long long a[100005];
   cin>>n>>k;
   cin>>a[0];
   index=0;
   mini=n%a[0];
   for(int i=1;i<k;i++)
   {
       cin>>a[i];
       temp=n%a[i];
       if(temp<mini)
       {
           mini=temp;
           index=i;
       }

   }
   long long ans;
   ans=n/a[index];
   cout<<index+1<<" "<<ans;

    return 0;
}
