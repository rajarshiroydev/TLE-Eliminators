#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n; cin >> n;
    for(int i = 2; i <= n; i++) {
        bool flag = false;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = true;
                break;
            }
        }
        if(!flag) cout << i << ' ';
    }
    return 0;
}