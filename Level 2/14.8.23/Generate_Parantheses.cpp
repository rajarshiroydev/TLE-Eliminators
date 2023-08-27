class Solution {
public:
    vector<string> ans;
    bool validParantheses(string &s)
    {
        int count = 0;
        for (auto i : s)
        {
            if (i == '(')
                count++;
            else
            {
                if (count <= 0)
                {
                    return false;
                }
                count--;
            }
        }
        return (count == 0);
    }

    void rec(string s, int n)
    {
        if (s.length() == 2 * n)
        {
            if (validParantheses(s))
            {
                ans.push_back(s);
            }
            return;
        }
        string open = s + '(';
        string closed = s + ')';
        rec(open, n);
        rec(closed, n);
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        rec(s, n);
        return ans;
    }
};