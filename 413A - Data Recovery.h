//413A - Data Recovery
#include<bits/stdc++.h>
using namespace std;
int main () {
    int n,m,_min,_max;
    int t[101];
    cin>>n>>m>>_min>>_max;
    int range=n-m,lack=2;
    for(int i=0;i<m;i++){
        cin>>t[i];
        }
    sort(t,t+m);
    if(t[m-1]==_max) lack--;
    if(t[0]==_min) lack--;

    if(range-lack<0)
        cout<<"Incorrect";

    else if (! ( _min<=t[0] && t[m-1]<=_max ) )
        cout<<"Incorrect";

    else cout<<"Correct";



        return 0;
}
