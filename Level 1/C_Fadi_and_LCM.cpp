#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll x; cin >> x;
    ll ans;
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0 && lcm(i, x / i) == x) {
            ans = i;
        }
    }
    cout << ans << " " << (x / ans) << endl;
}