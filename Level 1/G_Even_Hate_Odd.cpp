#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    while(t--) {
        int n, a, even = 0, odd = 0; cin >> n;
        if(n % 2 != 0) {
            for(int i = 0; i < n; i++) cin >> a;
            cout << -1 << endl;
        }
        else {
            for(int i = 0; i < n; i++) {
            cin >> a;
            if(a % 2 == 0) even++;
            else odd++;
            }
            if(even == odd) cout << 0 << endl;
            else if(even == 0) cout << odd / 2 << endl;
            else if(odd == 0) cout << even / 2 << endl;
            else if(odd < even) cout << (even - odd) / 2 << endl;
            else if(even < odd) cout << (odd - even) / 2 << endl;
        }
    }
    return 0;
}
// 1 1 1 1 1 1 2 2
// 2 2 1 1 1 2 2 2 

// 6 - 2 = 4 / 2 = 2