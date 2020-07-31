/*
	228A - Is your horseshoe on the other hoof? (Codeforces)
	Naser Dakhel
	2/6/2020
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int, greater<int>> numbers;
    int number;
    for (int i=0; i<4; i++)
    {
        cin>>number;
        numbers.insert(number);
    }

    int ans = 4 - numbers.size();
    cout<<ans;
    return 0;
}
