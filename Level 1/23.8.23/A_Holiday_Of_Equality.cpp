#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    int n;
    cin >> n;
    int maxi = -1;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxi)
            maxi = a[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += maxi - a[i];
    }
    cout << sum;

    return 0;
}