#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n, b; cin >> n >> b;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> v;
    while(b--) {
        int x; cin >> x; // 1
        int maxi = a[0], mini = a[0]; //33 33
        for(int i = 0; i <= n - x; i++) { // 0 < 5 - 1 = 4
            for(int j = i; j < i + x; j++) { // 0 < 0+2 = 1
                if(a[j] >= maxi) v.push_back(maxi);
            }
        cout << *min_element(v.begin(), v.end()) << endl;

        }
    }
}