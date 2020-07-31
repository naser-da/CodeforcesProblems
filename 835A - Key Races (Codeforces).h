// 835A - Key Races (Codeforces)
#include<bits/stdc++.h>
using namespace std;


int main ()
{

     int s,v1,v2,t1,t2;
     cin>>s>>v1>>v2>>t1>>t2;
     int result1,result2;
     result1=v1*s+t1*2;
     result2=v2*s+t2*2;
     if(result1<result2) cout<<"First";
     else if (result1>result2) cout<<"Second";
     else cout<<"Friendship";

    return 0;
}
