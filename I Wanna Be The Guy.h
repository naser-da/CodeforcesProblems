#include<bits/stdc++.h>
using namespace std;
int main () {
    int n;
    set <int> levels;
    int p,q;
    cin>>n;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        levels.insert(x);
    }

    cin>>q;
    for(int j=0;j<q;j++){
    int w;
    cin>>w;
    levels.insert(w);
    }
    if(levels.size()==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";

    return 0;
}
