#include <limits.h>
#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

int main() {
    string s;
    cin >> s;
    ll cx = 1, mx = INT_MIN;

    for (ll t=0;t<s.length()-1;++t) {
        if (s[t+1] == s[t]) ++cx;
        else cx = 1;

        mx = max(mx, cx);
    }
    if (mx == INT_MIN) mx = 1;
    cout << mx;
}

