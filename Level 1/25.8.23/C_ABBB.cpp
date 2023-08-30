#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        vector<char> v; // A
        for(int i = 0; i < s.size(); i++) {
            v.push_back(s[i]);
            while(v.size() >= 2 && v[v.size() - 2] == 'A' && v[v.size() - 1] == 'B' || v[v.size() - 2] == 'B' && v[v.size() - 1] == 'B') {
                v.pop_back();
                v.pop_back();
            }
        }
        cout << v.size() << endl;
    }
    return 0;
}
