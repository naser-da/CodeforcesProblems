//Dragons -230A
#include<bits/stdc++.h>
using namespace std ;
int main () {
	int s,n;
	pair<int,int> p[1001];
	cin>>s>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i].first>>p[i].second;
	}

	sort(p,p+n);

	for(int i=0;i<n;i++)
	{
		if(p[i].first<s)
		{
			s+=p[i].second;
		}
		else{
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES";
	return 0 ;
}
