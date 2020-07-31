//177D1 - Encrypting Messages
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m , n , c , a[1004] , b[1004];
	
	cin>>n >>m >>c;
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=0; i<m; i++)
		cin>>b[i];
	
	for(int i=0; i<n-m+1; i++ )
		for(int j=0 ; j<m ; j++)
		{
			a[j+i]=(a[j+i]+b[j])%c;
		}
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	return 0;
}
