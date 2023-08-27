#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    class Solution
    {
    public:
        int countStudents(vector<int> &students, vector<int> &sandwiches)
        {
            int size = students.size();
            queue<int> q;
            for (int i = 0; i < size; i++)
            {
                q.push(students[i]);
            }
            for (int i = 0; i < size; i++)
            {
                int count = 0;
                while (!q.empty() && count < size)
                {
                    if (q.front() == sandwiches[i])
                    {
                        q.pop();
                        break;
                    }
                    else
                    {
                        q.push(q.front());
                        q.pop();
                        count++; // 1
                    }
                }
                if (count >= size)
                {
                    return q.size();
                }
            }
            return 0;
        }
    };
    return 0;
}