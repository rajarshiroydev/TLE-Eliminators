#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    bool flag = true;
    while (t--) {
        int n; cin >> n;
        if(n == 1) flag = false;
    }
    if(flag) cout << "EASY";
    else cout << "HARD";  
    return 0;
}