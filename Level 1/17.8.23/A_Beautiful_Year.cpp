#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int y; cin >> y;
    int i = y + 1;
    bool flag = true;
    while(flag) {
        int ones = i % 10;
        int tens = (i / 10) % 10;
        int hundredth = (i / 100) % 10;
        int thousandth = (i / 1000) % 10;
        if(ones != tens && ones != tens && ones != hundredth && ones != thousandth
        && tens != hundredth && tens != thousandth && hundredth != thousandth) {
            cout << i;
            flag = false;
        }
        i++;
    }
    return 0;
}