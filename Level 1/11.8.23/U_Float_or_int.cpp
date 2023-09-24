#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    float n; cin >> n;
    if(int(n) == n) cout << "int " << int(n);
    else cout << "float " << int(n) << ' ' << fixed << setprecision(3) << n - int(n);
    return 0;
}