//Gennady and a Card Game -1097A
#include<bits/stdc++.h>
using namespace std ;
int main () {
	string s;
	string a;
	cin>>s;
	for(int i=0;i<5;i++)
	{
	    cin>>a;
		if(s[0] == a[0])
        {
            cout<<"YES";
            return 0;
        }

        if (s[1]== a[1])
        {
            cout<<"YES";
            return 0 ;
        }
	}


        cout<<"NO";


		return 0;
	}
