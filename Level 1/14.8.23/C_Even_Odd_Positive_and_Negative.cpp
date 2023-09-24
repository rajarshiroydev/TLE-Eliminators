#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int n, a, even = 0, odd = 0, positive = 0, negative = 0; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(abs(a) % 2 == 0) even++;
        else odd++;
        if(a > 0) positive++;
        else if(a < 0) negative++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative;
    return 0;
}