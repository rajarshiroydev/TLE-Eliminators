#include<bits/stdc++.h>

using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

template<typename S, typename T> void smax(S& a, const T& b) { if (a < b) a = b; }
template<typename S, typename T> void smin(S& a, const T& b) { if (a > b) a = b; }

#define rng_init mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_speed(x) mt19937 rng(x)
#define all(x) (x).begin(), (x).end()
#define sortRev(x) (x).rbegin(), (x).rend()
#define sz(x) (int) (x).size()
#define int long long

const int MXN = 1e5 + 5, INF = 1e9 + 5;

void solve() {
    int n; cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int i, key, j;
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(arr[i]);
    }
    
    sort(sortRev(v));
    bool flag = true;
    for (int i = 0; i < n; i++) {
        if (v[i] != arr[i]) flag = false;
    }
    if (!flag) cout << -1 << endl;
    else {
        for (i = 1; i < n; i++) {
            key = arr[i];
            j = i - 1;
            // Move elements of arr[0..i-1],
            // that are greater than key,
            // to one position ahead of their
            // current position
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            count++;
            arr[j + 1] = key;
        }
    }
    cout << count << endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}