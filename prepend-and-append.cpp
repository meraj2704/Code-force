#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool op = true;
        while (op)
        {
            if (s.size() > 1)
            {
                if ((s.front() == '1' && s.back() == '0') || (s.front() == '0' && s.back() == '1'))
                {
                    s = s.substr(1, s.length() - 2);
                }
                else
                {
                    op = false;
                }
            }
            else{
                op=false;
            }
        }
        cout << s.size() << endl;
    }
}