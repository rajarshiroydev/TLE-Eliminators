#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    while(t--)  {
        int a[4];
        for(int i = 0; i < 4; i++) {
            cin >> a[i];
        }
        int max1 = max(a[0], a[1]);
        int max2 = max(a[2], a[3]);

        int a_size = sizeof(a) / sizeof(a[0]);
        sort(a, a + a_size);

        int maxi = a[3];
        int second_maxi = a[2];

        if(max1 == maxi || max1 == second_maxi) {
            if(max2 == maxi || max2 == second_maxi) {
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}