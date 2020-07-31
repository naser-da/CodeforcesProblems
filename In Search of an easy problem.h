//In Search of an Easy Problem
#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	int a[101];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==1) {
			cout<<"HARD";
			return 0 ;

		}
	}


	cout<<"EASY";

	return 0;
}
