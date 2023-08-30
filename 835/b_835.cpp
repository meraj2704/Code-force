#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        //cout << s << endl;
       // cout << s[n-1] << endl;
        cout << (int(s[n-1])-97)+1 << endl;
    }
}