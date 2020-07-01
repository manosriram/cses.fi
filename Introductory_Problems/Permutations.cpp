#include <iostream>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin >> n;
    if (n == 1) {
        cout << 1;
        return 0;
    } else if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }

    if (n % 2 == 0) {
        for (int t=2;t<=n;t+=2) cout << t << " ";

        for (int t=1;t<n;t+=2) cout << t << " ";
    } else {
        for (int t=n-1;t>0;t-=2) cout << t << " ";

        for (int t=n;t>0;t-=2) cout << t << " ";
    }
}
