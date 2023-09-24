#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a, b; 
    char c;
    cin >> a >> c >> b;
    if(c == '<' && a < b) cout << "Right";
    else if(c == '>' && a > b) cout << "Right";
    else if(c == '=' && a == b) cout << "Right";
    else {
        if(c == '<' && (a > b || a == b)) cout << "Wrong";
        else if(c == '>' && (a < b || a == b)) cout << "Wrong";
        else if(c == '=' && (a < b || a > b)) cout << "Wrong";
    }
    return 0;
}