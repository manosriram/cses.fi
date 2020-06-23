#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    
    for (ll t=0;t<n;++t) cin >> a[t];

    ll sm = 0;
    for (ll t=1;t<n;++t) {
        if (a[t] < a[t-1]) {
            sm += a[t-1] - a[t];
            a[t] = a[t-1];
        }
    }
    cout << sm;
}

