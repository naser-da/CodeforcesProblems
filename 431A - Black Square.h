//Black Square -431A
#include<bits/stdc++.h>
using namespace std;
int main () {
	int a[4];
	string s;
	int a1=0,a2=0,a3=0,a4=0;
	int sum=0;
	for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }
	cin>>s;

	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='1') a1++;
		else if (s[i]=='2') a2++;
		else if (s[i]=='3') a3++;
		else if (s[i]=='4') a4++;
	}

        sum=(a1*a[0])+(a2*a[1])+(a3*a[2])+(a4*a[3]);

        cout<<sum;

		return 0 ;
	}
