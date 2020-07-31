//268A-Games
#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	int ans=0;
	pair<int,int> p[30];
	cin>>n;
	for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }

	for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        if(p[i].first==p[j].second) ans++;
    }


    cout<<ans;

	return 0;
}
