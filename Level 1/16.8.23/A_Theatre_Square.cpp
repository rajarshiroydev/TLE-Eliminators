#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    double n, m, a, l, b; cin >> n >> m >> a;
    l = ceil(n / a);
    b = ceil(m / a);
    long long ans = l * b;
    cout<<ans;
    return 0;
}