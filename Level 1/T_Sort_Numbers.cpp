#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a, b, c; cin >> a >> b >> c;
    int x = a, y = b, z = c;
    if (a > c) swap(a, c);
    if (a > b) swap(a, b);
    //Now the smallest element is the 1st one. Just check the 2nd and 3rd
    if (b > c) swap(b, c);
    cout << a << endl << b << endl << c << endl << endl;
    cout << x << endl << y << endl << z;
    return 0;
}