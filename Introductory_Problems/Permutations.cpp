#include <limits.h>
#include <math.h>
#include <iostream>
#include <cstring>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    ll ct = n;
    for (ll t=0;t<n;t+=2) {
        a[t] = ct--;
    }
    ct = 1;
    for (ll t=1;t<n;t+=2) {
        a[t] = ct++;
    }

    for (ll t=0;t<n;t++) cout << a[t] << " ";
    for (ll t=1;t<n;t++) {
        if (abs(a[t] - a[t-1]) == 1) {
            cout << "NO SOLUTION";
            return 0;
        }
    }

    for (ll t=0;t<n;t++) cout << a[t] << " ";

}
