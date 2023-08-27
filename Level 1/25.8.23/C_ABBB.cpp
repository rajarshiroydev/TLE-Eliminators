#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    int t; cin >> t;
    while(t--) {
        stack<char> stack;
        string s; cin >> s;
        for(int i = 0; i < s.size() - 1; i++) {
            char c = s[i]; //a
            char current;
            stack.push(c); //aa
            if(stack.size() >= 1) {
                current = stack.top(); //a
                stack.push(s[i + 1]); //aaa
                if(current == 'A' && stack.top() == 'B') {
                    stack.pop();
                    stack.pop();
                    i++;
                }
                else if(current == 'B' && stack.top() == 'B') {
                    stack.pop();
                    stack.pop();
                    i++;
                }
                else stack.pop();//aa
            }
        }
        stack.push(s[s.size() - 1]);
        cout << stack.size() << endl;
    }
    return 0;
}