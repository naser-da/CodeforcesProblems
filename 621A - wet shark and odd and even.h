//wet shark and odd and even -621A
#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	long long a[100001];
	long long  temp=999999999,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(a[i]%2!=0 && a[i]<=temp)
		{
			temp=a[i];
		}
	}


	if(sum%2!=0)
	{
		sum-=temp;
	}

	cout<<sum;



	return 0 ;
}
