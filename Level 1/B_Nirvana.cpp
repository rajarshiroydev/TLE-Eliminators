#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;


void digitProd(ll n) {
    int maxi = 0;
    for (int i = 0; i <= n; i += 99) {
        ll sum = 0;
        while (i != 0) {
            int rem = i % 10;
            sum += rem;
            i = i / 10;
        }
        if (sum > maxi) maxi = sum;
    }
    int ans = 1;
    while (ans != 0) {
        int rem = ans % 10;
        ans *= rem;
        ans = ans / 10;
    }
    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    digitProd(n);
}