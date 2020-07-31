//Bus to Udayland -711A
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,x,y;
    char a[1001][5];
    cin>>n;
    bool sol=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5-1; j++)
        {
            if(a[i][j]=='O' && a[i][j+1]=='O')
            {
                a[i][j]='+';
                a[i][j+1]='+';
                cout<<"YES";
                for(int i=0; i<n; i++)
                {
                    cout<<endl;
                    for(int j=0; j<5; j++)
                    {
                        cout<<a[i][j];
                    }
                }


                return 0;
            }
        }
    }

    cout<<"NO";


    return 0;
}
