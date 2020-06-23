#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    bool a[n+1];
    memset(a, false, n+1);
    for (int t=0;t<n-1;++t) {
        int temp;cin >> temp;
        a[temp] = true;
    }
    for (int t=1;t<=n;++t) {
        if (!a[t]) cout << t;
    }
}

