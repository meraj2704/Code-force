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
        {
            cin >> a[i];
        }
        int evenSum = 0;
        int oddSum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                evenSum += a[i];
            else
                oddSum += a[i];
        }

        evenSum > oddSum ? cout << "YES\n" : cout << "NO\n";
    }
}