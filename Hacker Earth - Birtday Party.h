//Hacker Earth - Birtday Party

#include<bits/stdc++.h>
using namespace std;

int main ()
{
   int t;
   int m[21],n[21];
   
   cin>>t;
   for(int i=0;i<t;i++)
   {
       cin>>n[i]>>m[i];
   }
   
   for(int i=0;i<t;i++)
   {
       if(m[i]%n[i]==0) cout<<"Yes";
       else cout<<"No";
       cout<<endl;
   }
    return 0;
}
