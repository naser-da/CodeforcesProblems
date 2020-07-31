//Anton and Polyhedrons
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sides=0;
    string s[200001];
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>s[i];
       if(s[i]=="Tetrahedron") sides+=4;
       else if (s[i]=="Cube") sides+=6;
       else if (s[i]=="Octahedron") sides+=8;
       else if (s[i]=="Dodecahedron") sides+=12;
       else sides+=20;

    }
    cout<<sides;

    return 0 ;
}
