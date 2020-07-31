//Drinks -200B
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p;
	int sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p;
		sum+=p;
	}
	cout<<(sum*1.0)/n;
	return 0;
}