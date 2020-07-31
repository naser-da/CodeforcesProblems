// 702A - Maximum Increase (Codeforces)
#include<bits/stdc++.h>
using namespace std;


int main ()
{

     int n,cnt=0,temp=0;
     int a[100005];

     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
     }

     for(int i=0;i<n-1;i++)
     {
         if(a[i+1]-a[i]>0) cnt++;
         else
         {
             cnt=0;
         }

         if(cnt>temp) temp=cnt;
     }

     cout<<temp+1;

    return 0;
}
