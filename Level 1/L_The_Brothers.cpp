#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    string a_name, a_title, b_name, b_title;
    cin >> a_name >> a_title >> b_name >> b_title;
    if(a_title == b_title) cout << "ARE Brothers";
    else cout << "NOT";
    return 0;
}