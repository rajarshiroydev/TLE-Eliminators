#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    long long n; cin >> n;
    long long first = 0, second = 1;
    long long current;
    for(int i = 0; i < n - 1; i++) {
        current = first + second;
        first = second;
        second = current;
    }
    cout << first;
    return 0;
}