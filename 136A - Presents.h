//Presents -136A
#include<bits/stdc++.h>
using namespace std ;
int main () {
	int n;
	int a[102];
	int a2[102];
	cin>>n;
	for(int i=1;i<n+1;i++)
    {
        cin>>a[i];
        int x=a[i];
        a2[x]=i;
    }

	for(int i=1;i<n+1;i++)
    {
        cout<<a2[i]<<" ";
    }

	return 0 ;
}
