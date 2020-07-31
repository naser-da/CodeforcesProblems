//Anton and Danik -734A
#include<bits/stdc++.h>
using namespace std;
int main () {
        int n;
        string s;
        int a_cnt=0,d_cnt=0;
        cin>>n>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A') a_cnt++;
            else if (s[i]=='D') d_cnt++;
        }

        if(a_cnt>d_cnt) cout<<"Anton";
        else if (d_cnt>a_cnt) cout<<"Danik";
        else if (d_cnt=a_cnt) cout<<"Friendship";
	return 0;
}
