/*
    110A - Nearly Lucky Number (Codeforces)
    Naser Dakhel
    5/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string number;
    bool seven = false, four=false,flag=true;
    int cnt =0;
    cin>>number;

    for(int i=0;i<number.length();i++)
    {
        if(number[i]=='7')
            {
                //seven = true;
                cnt++;
            }
        else if(number[i]=='4')
            {
                //four= true;
                cnt++;
            }
    }
    string cntstr = to_string(cnt);
    for(int i=0;i<cntstr.length();i++)
    {
        if(cntstr[i]!='7' && cntstr[i]!='4')
        {
            flag=false;
        }
    }
    if (flag)
    cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
