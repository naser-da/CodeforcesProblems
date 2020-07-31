//1132B - Discounts
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n;
    vector <int> cost;
    vector <int> coupon;
    long long ans=0,temp;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
		cost.push_back(x);
        ans+=x;
    }

    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        coupon.push_back(x);
    }

    sort(cost.begin(),cost.end());


    for(int i=0;i<m;i++)
    {

        int y=n-coupon[i];
        cout<<ans-cost[y]<<endl;

    }

    return 0;
}