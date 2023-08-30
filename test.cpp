#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        map[a[i]]++;
    }
    for (int i = 1; i <= map.size(); ++i) {
        cout << "map[" << i << "]: " << map[i] << endl;
    }
}
