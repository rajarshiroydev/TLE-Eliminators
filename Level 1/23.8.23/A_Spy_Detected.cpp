#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int hash[101] = {0};
        for(int i = 0; i < n; i++) {
            hash[a[i]]++;
        }
        for(int i = 0; i < 101; i++) {
            cout << hash[i] << ' ';
        }
        cout << endl;
    }
    return 0;
}