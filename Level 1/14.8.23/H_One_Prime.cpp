#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a; cin >> a;
    bool flag = false;
    if(a == 2) cout << "YES";
    else {
        for(int i = 2; i < a; i++) {
        if(a % i == 0) {
            flag = true;
            break;
        }
    }
    if(flag) cout << "NO";
    else cout << "YES";
    }
    return 0;
}