//413B - Spyke Chatting .
#include <bits/stdc++.h>
using namespace std ;
int main()
{
	int n , m , k , x[200005][2]={0} , sum[10]={0} , b[20005]={0};
	bool a[20005][10]={0};
	cin >> n >> m >> k ;
	for(int i=1; i<=n; i++)
	{	
		for(int j=1; j<=m; j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int i=1; i<=k; i++)
	{
		cin>>x[i][1]>>x[i][2];				
		sum[x[i][2]]++;
	}
	
	for(int i=1; i<=n; i++)
	{	
		for(int j=1; j<=m; j++)
		{
			if(a[i][j])
				b[i]+=sum[j];
		}
	}

	for(int i=1; i<=k; i++)
	{
		b[x[i][1]]--;
	}
	
	for(int i=1; i<=n; i++)
		cout<<b[i]<<" ";
	return 0;
	
}
