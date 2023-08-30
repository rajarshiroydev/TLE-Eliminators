#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int count = 0;
        while(n > 1) {
            if(n % 6 == 0) {
                n /= 6;
                count++;
            } 
            else {
                n *= 2;
                count++;
            }
        }
        if(n < 1) cout << -1 << endl;
        else cout << count << endl;
    }
}
