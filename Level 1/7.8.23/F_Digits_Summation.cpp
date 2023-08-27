#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long long a, b; cin >> a >> b;
    long long num1 = a % 10, num2 = b % 10;
    cout << num1 + num2;
    return 0;
}