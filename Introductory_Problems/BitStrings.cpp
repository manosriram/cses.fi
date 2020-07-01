#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin >> n;
    cout << (ll) pow(2, n) % ((ll) 1000000007) << endl;
}
