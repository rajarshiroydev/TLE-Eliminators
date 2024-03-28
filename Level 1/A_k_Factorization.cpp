#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll n, k; cin >> n >> k;
    vector<ll> v;
    for (int i = 0; i < k - 1; i++) {
        v.push_back(2);
    }
    ll x = n / pow(2, k - 1);
    v.push_back(x);
    ll ans = 1;
    for (auto i : v) {
        ans *= i;
    }
    if (ans != n) cout << -1;
    else {
        for (int i = 0; i < v.size(); i++) {
            if (i == v.size() - 1) cout << v[i];
            else cout << v[i] << ' ';
        }
    }
}