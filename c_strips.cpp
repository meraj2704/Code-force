// #include<bits/stdc++.h>
#include <iostream>
using namespace std;
char check(char a[8][8])
{
    int r = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (a[i][j] == 'R')
                r++;
        }
        if (r == 8)
            return 'R';
            r=0;
    }

    return 'B';
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[8][8];

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << check(a) << endl;

        // hi its me again for compiler error
    }
}