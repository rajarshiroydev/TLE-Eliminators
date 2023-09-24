#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int a[5];
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    int asize = sizeof(a) / sizeof(a[0]);
    sort(a, a + asize);
    int count1 = 0, count2 = 0;
    for(int i = 0; i < 5; i++) {
        if(a[i] == a[0]) count1++;
        else if(a[i] == a[4]) count2++;
    }
    if((count1 == 3 && count2 == 2) || (count1 == 2 && count2 == 3)) {
        cout << "Yes";
    }
    else cout << "No";
    return 0;
}