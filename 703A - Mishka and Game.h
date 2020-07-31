//Mishka and Game -703A
#include<bits/stdc++.h>
using namespace std;
int main () {
	int n;
	int cnt_m=0,cnt_c=0;
	cin>>n;
	for(int i=0;i<n;i++)
    {
        int m,c;
        cin>>m>>c;
        if(m>c) cnt_m++;
        else if (c>m) cnt_c++;
    }

    if(cnt_m>cnt_c) cout<<"Mishka";
    else if (cnt_c>cnt_m) cout<<"Chris";
    else cout<<"Friendship is magic!^^";

	return 0;
}
