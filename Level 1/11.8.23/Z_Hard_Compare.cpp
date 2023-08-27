#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b * log(a) > d * log(c)) cout << "YES";
    else cout << "NO";
    return 0;
}