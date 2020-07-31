//One-dimensional Japanese Crossword -721A
#include<bits/stdc++.h>
using namespace std;
int n, s = 0, arr[51], j = 0;
string st;
int main() {
    cin >>n>>st;
    for (int i = 0; i < n; i++) {
        if (st[i] == 'B') {
            s++;
            arr[j] = s;
            if (i == n - 1) {
                j++;
            }
        } else if (s != 0) {
            s = 0;
            j++;
        }
    }
    cout << j << endl;
    for (int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
}