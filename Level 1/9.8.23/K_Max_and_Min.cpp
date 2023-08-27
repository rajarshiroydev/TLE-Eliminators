#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a, b, c, mini, maxi; cin >> a >> b >> c;
    mini = min(a, min(b, c));
    maxi = max(a, max(b, c));
    cout << mini << ' ' << maxi;
    return 0;
}