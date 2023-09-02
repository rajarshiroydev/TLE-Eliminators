#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << ' ' << x << endl;
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<long long> v;
    long long sum = arr[0];
    long long maxi = arr[0];
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > 0 && arr[i - 1] < 0 || arr[i] < 0 && arr[i - 1] > 0) {
            sum += arr[i];
            count++;
        }
        else {
            v.push_back(sum);
            sum = arr[i];
        }
        if (count == n) v.push_back(sum); //edge case when every element in the array is alternating
    }
    if (arr.size() == 2) cout << *max_element(arr.begin(), arr.end()) << endl;
    else cout << *max_element(v.begin(), v.end()) << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while (t--) {
        solve();
    }
}