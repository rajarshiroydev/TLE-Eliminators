#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        map<int, int> map;

        for(int i = 0; i < n; i++) {
            map[a[i]]++;
        }
        int target;
        for(int i = 0; i < n; i++) {
            if(map[a[i]] == 1) {
                target = a[i];
                break;
            }
        }
        for(int i = 0; i < n; i++) {
            if(a[i] == target) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
}