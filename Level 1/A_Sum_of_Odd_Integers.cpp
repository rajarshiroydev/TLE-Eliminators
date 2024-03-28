#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        long long n, k; cin >> n >> k;
        if (k * k > n || n % 2 != k % 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}