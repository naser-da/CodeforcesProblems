//Vasya the Hipster -581A
#include<bits/stdc++.h>
using namespace std;
int main () {
	int a,b;
	cin>>a>>b;
	int x = min(a,b);
    int y = max(a,b) - min(a,b);
    int z=0;
    while(y>=2) {
        y-=2;
        z++;
    }
    cout<<x<<" "<<z;
	return 0;
}
