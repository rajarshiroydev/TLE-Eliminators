#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        ll n; cin >> n;
        vector<ll> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        ll maxi = *max_element(v.begin(), v.end());
        ll mini = *min_element(v.begin(), v.end());
        ll ans = maxi * mini;


        vector<ll> divisors;

        for (ll i = 2; i * i <= ans; i++) {
            if (ans % i == 0) {
                divisors.push_back(i);
                if (ans / i != i)     divisors.push_back(ans / i);
            }
        }

        sort(v.begin(), v.end());
        sort(divisors.begin(), divisors.end());

        bool flag = true;
        if (v.size() == divisors.size()) {
            for (int i = 0; i < n; i++) {
                if (v[i] != divisors[i]) {
                    flag = false;
                    break;
                }
            }
        }
        else flag = false;

        if (flag) cout << ans << endl;
        else cout << -1 << endl;
    }
}