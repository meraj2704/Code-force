#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string str;
        getline(cin, str);
        if (str[0] == 'a' || str[1] == 'b' || str[2] == 'c')
            cout << "YES\n";
        else
            cout << "No\n";
    }
}