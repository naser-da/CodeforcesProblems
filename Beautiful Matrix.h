#include<bits/stdc++.h>
using namespace std ;
int main () {
	bool a[5][5];
	int x,y;
	for(int i=1;i<6;i++){
		for(int j=1;j<6;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				i=x;
				j=y;
			}
		}
	}
	cout<<abs(x-3)+abs(y-3);
	
	return 0 ;
}