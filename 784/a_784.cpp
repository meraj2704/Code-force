#include <bits/stdc++.h>
// #include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int r;
        cin >> r;
        if(r<=1399)cout << "Division 4\n";
        else if(1400<=r && r<=1599) cout << "Division 3\n";
        else if(1600<=r && r<=1899) cout << "Division 2\n";
        else cout << "Division 1\n";
    }
}