//Word - 59A
#include<bits/stdc++.h>
using namespace std;
int main () {
	string s;
	int up_cnt=0,lo_cnt=0;
	cin>>s;
	   for(int i=0;i<s.size();i++){
            if(isupper(s[i])) up_cnt++;
            else lo_cnt++;
	   }

      for(int i=0;i<s.size();i++)
      {
          if(up_cnt>lo_cnt) {
            char a=toupper(s[i]);
            cout<<a;
          }
          else
          {
              char b=tolower(s[i]);
              cout<<b;
          }
      }

	return 0;
}
