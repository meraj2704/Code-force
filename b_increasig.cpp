#include <iostream>
#include <algorithm>
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
        sort(a, a + n);
        bool x = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] >= a[i + 1])
                x = false;
        }
        if (x)
        {
            cout << "YES" << endl;
        }
        else
        {

        cout << "NO" << endl;
        }
    }
    // igiusad
}