#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    bool ar[100001];
    int curr=0;
    curr=n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>arr[x];
        arr[x]=1;
        if(x==curr)
        {
            for(int j=curr; j>0; j--)
            {
                if(arr[j])
                {
                    cout<<i<<" ";
                    arr[j]=0;
                    curr=j-1
                }
                else
                {
                    break;
                }
            }

        }

    }

    cout<<endl;

    return 0 ;
}