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

        int longest_blank = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count++;
                if (longest_blank < count)
                    longest_blank = count;
            }
            else
            {
                
                count = 0;
            }
        }
            cout << longest_blank << endl;
    }
}