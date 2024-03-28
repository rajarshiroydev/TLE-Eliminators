#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int k, s, count = 0; cin >> k >> s;
    for(int x = 0; x <= k; x++) {
        for(int y = 0; y <= k; y++) {
            int z = s - x - y;
            if(z >= 0 && z <= k) count++;
        }
    }
    cout << count;
    return 0;
}

// x + y + z = s
// 0 <= x, y, z <= k