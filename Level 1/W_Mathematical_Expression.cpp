#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a, b, c;
    char sign, equal;
    cin >> a >> sign >> b >> equal >> c;
    if(sign == '+' && c == a + b) cout << "Yes";
    else if(sign == '-' && c == a - b) cout << "Yes";
    else if(sign == '*' && c == a * b) cout << "Yes";
    else {
        if(sign == '+') cout << a + b;
        else if(sign == '-') cout << a - b;
        else if(sign == '*') cout << a * b;
    }
    return 0;
}