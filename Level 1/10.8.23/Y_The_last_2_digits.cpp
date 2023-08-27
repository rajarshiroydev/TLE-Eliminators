#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long long a, b, c, d; cin >> a >> b >> c >> d;
    long long x = a%100 * b%100 * c%100 * d%100;
    if(x < 10) cout << 0 << x;
    else cout << x;
    return 0;
}