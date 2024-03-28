#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n, m; cin >> n >> m;
    int a = 0, b = 0;
    bool flag = true;
    int count = 0;
    for(int a = 0; a * a <= n; a++) {
        for(int b = 0; b * b <= m; b++) {
            if((a * a) + b == n && a + (b * b) == m) count++;
        }
    }
    cout << count;
    return 0;
}