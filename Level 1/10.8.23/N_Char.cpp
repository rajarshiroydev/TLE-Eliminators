#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    char a; cin >> a;
    int b;
    if(int(a) >= 65 && int(a) <= 90) {
        b = int(a) + 32;
        cout << char(b);
    }
    else if(int(a) >= 97 && int(a) <= 122) {
        b = int(a) - 32;
        cout << char(b);
    } 
    return 0;
}