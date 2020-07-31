/*
    236A - Boy or Girl (Codeforces)
    Naser Dakhel
    3/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    set <int,greater<int>> letters;
    cin>>name;

    for(int i=0;i<name.length();i++)
    {
        letters.insert(name[i]);
    }

    if (letters.size()%2 == 0 || name.length() == 1)
    {
        cout<<"CHAT WITH HER!";
    }

    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}
