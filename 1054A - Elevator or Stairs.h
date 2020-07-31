//Elevator or Stairs -1054A
#include<bits/stdc++.h>
using namespace std ;
int main () {
	int x,z,y,t1,t2,t3;
	cin>>x>>y>>z>>t1>>t2>>t3;
	int t_elev,t_st;
	t_elev = t2*(abs(x-z)+abs(y-x))+3*t3;
	t_st = t1*abs(x-y);
	if(t_elev<=t_st) cout<<"YES";
	else cout<<"NO";
	return 0 ;

}
