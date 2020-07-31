/*
    61A - Ultra-Fast Mathematician (Codeforces)
    Naser Dakhel
    5/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num1,num2,ans;
    cin>>num1>>num2;
    int len = num1.length();
    ans = num1;

    for(int i=0;i<len;i++)
    {
        if((num1[i]=='1' && num2[i]=='1') || (num1[i]=='0' && num2[i]=='0'))
            ans[i] = '0';
        else if ((num1[i]=='0' && num2[i]=='1') || (num1[i]=='1' && num2[i]=='0'))
            ans[i] = '1';
    }

    cout<<ans;

    return 0;
}
