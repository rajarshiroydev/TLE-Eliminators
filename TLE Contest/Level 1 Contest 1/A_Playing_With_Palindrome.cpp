#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;
        string original = s;

        if (s.length() <= 3) {
            cout << "NO" << endl;
        }
        else {
            char temp = s[0];
            s[0] = s[1];
            s[1] = temp;

            temp = s[s.length() - 1];
            s[s.length() - 1] = s[s.length() - 2];
            s[s.length() - 2] = temp;

            if (original == s) {
                cout << "NO" << endl;
            }
            else {
                string rev = string(s.rbegin(), s.rend());
                if (s == rev) {
                    cout << "YES" << endl;
                }
                else {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}
