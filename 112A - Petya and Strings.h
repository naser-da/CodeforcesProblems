/*
    112A - Petya and Strings (Codeforces)
    Naser Dakhel
    2/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    for (int i=0; i<str1.length(); i++)
    {
        if(tolower(str1[i]) > tolower(str2[i]))
        {
            cout<<1;
            return 0;
        }
        else if (tolower(str1[i]) < tolower(str2[i]))
        {
            cout<<-1;
            return 0;
        }
    }

    cout<<0;
    return 0;
}
