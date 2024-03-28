#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int k; cin >> k;
    int hours = k / 60;
    int minutes = k - (hours * 60);
    if(minutes < 10) {
        cout << 21 + hours << ":" << 0 << minutes;
    } 
    else cout << 21 + hours << ":" << minutes;
    
    return 0;
}