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
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                odd++;
            else
                even++;
        }
        bool p = false;
        if (odd == n || even == n)
        {
            p =true;
        }
        else if (a[0] % 2 != 0)
        {
            int i = 0;
            while (i < n)
            {
                if (i == (n - 1))
                {
                    if (a[i] % 2 != 0)
                    {
                        p = true;
                        i += 2;
                    }
                    else
                    {
                        p = false;
                        break;
                    }
                }
                else
                {
                    if (a[i] % 2 != 0 && a[i + 1] % 2 == 0)
                    {
                        p = true;
                        i += 2;
                    }
                    else
                    {
                        p = false;
                        break;
                    }
                }
            }
           
        }
        else
        {
            int i = 0;
            while (i < n)
            {
                if (i == (n - 1))
                {
                    if (a[i] % 2 == 0)
                    {
                        p = true;
                        i += 2;
                    }
                    else
                    {
                        p = false;
                        break;
                    }
                }
                else
                {
                    if (a[i] % 2 == 0 && a[i + 1] % 2 != 0)
                    {
                        p = true;
                        i += 2;
                    }
                    else
                    {
                        p = false;
                        break;
                    }
                }
            }
            
        }
        if(p) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}