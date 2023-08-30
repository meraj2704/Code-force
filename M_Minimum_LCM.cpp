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
        int one = 1;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i == 0)
            {
                one = n/i;
                break;
            }
        }
        cout << one << " " << n-one << endl;
    }
}