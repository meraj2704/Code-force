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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        int y = 1;
        for (auto x : m)
        {
            if (x.second >= 3)
            {

        cout << x.first << endl;
        y = 0;
        break;
            }
        }
        if (y == 1)
            cout << -1 << endl;
    }
}