#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector<int> v;
    for (int i = 2; i <= n; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) count++;
        }
        if (count <= 2) v.push_back(i);
    }
    int noldbachCount = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j <= v.size() - 1; j++) {
            if (v[j] + v[j + 1] + 1 == v[i]) noldbachCount++;
        }
    }
    // debug(noldbachCount);
    if (noldbachCount >= k) cout << "YES";
    else cout << "NO";
}

// 2 to n