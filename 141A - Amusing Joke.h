/*
    141A - Amusing Joke (Codeforces)
    Naser Dakhel
    5/6/2020
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name1,name2,letters;
    cin>>name1>>name2>>letters;
    string compare = name1+name2;

    if(letters.length()!=compare.length())
    {
        cout<<"NO";
        return 0;
    }

    sort(compare.begin(),compare.end());
    sort(letters.begin(),letters.end());

    for(int i=0;i<letters.length();i++)
    {
        if(letters[i]!=compare[i])
        {
            cout<<"NO";
            return 0;
        }
    }

    cout<<"YES";

    return 0;
}
