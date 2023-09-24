#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    while(t--) {
        long long a, b, sum1 = 0, sum2 = 0, sum3 = 0;    
        cin >> a >> b;
        //sum1 is sum of n numbers till a - 1
        //sum2 is sum of n numbers till b
        if(b > a) {
            sum1 = ((a - 1) * (a)) / 2;
            sum2 = (b * (b + 1)) / 2;
            sum3 = sum2 - sum1;
            cout << sum3 << endl;
        }
        else {
            sum1 = ((b - 1) * (b)) / 2;
            sum2 = (a * (a + 1)) / 2;
            sum3 = sum2 - sum1;
            cout << sum3 << endl;
        }
        
    }
    return 0;
}