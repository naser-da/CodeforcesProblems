//50A-Domino Piling
#include<bits/stdc++.h>
using namespace std;
int main () {
	int n,m;
	int ans,s;
	cin>>n>>m;
	s=n*m;
	ans=s;
	if(s%2!=0) ans--;
	cout<<ans/2;
	return 0;
}
