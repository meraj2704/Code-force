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
        string str;
        cin >> str;
        int c = 0;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                if (i == 0)
                    c = 1;
                else
                {
                    if (c)
                        ans += '-';
                    else
                        ans += '+';

                    c ^= 1;
                }
            }
            else if (i > 0)
                ans += '+';
        }

        cout << ans << endl;
    }
}