//Magnets -344A
#include<bits/stdc++.h>
using namespace std;
int main () {
        int n;
        int sum=0;
       int cnt=1;
        int a[100001];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1]) cnt++;
        }


        cout<<cnt;


	return 0;
}
