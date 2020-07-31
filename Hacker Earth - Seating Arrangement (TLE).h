//Hacker Earth - Seating Arrangement (TLE)


#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int t,cas[110],ans[110];
    string s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>cas[i];
    }

    int k=12;

    for(int i=1;i<10;i++)
    {

        for(int y=0,j=k-11,z=k;y<12;y++,j++,z--)
        {
            ans[j]=z;
        }

        k+=12;
    }



    for(int i=0;i<t;i++)
    {
        if(ans[cas[i]]%6 == 0 || ans[cas[i]]%6 == 1 ) s="WS";
        else if (ans[cas[i]]%6 == 2 || ans[cas[i]]%6 == 5 ) s="MS";
        else s="AS";

        cout<<ans[cas[i]]<<" "<<s<<endl;
    }

    /*int num;
    cin>>num;
    cout<<ans[num];*/

    return 0;
}
