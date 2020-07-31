//Vanya and Fence -677A
#include<bits/stdc++.h>
using namespace std;
int main () {
        int n,h;
        int w=0;
        int a[1001];
        cin>>n>>h;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>h) w+=2;
            else w++;
        }

        cout<<w;

		return 0 ;
	}
