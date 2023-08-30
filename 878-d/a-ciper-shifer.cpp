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

        string new_string ="";
        int f=0;
        // int i=0;
        char lst = s[0];
        // cout << 1 << endl;
        new_string = new_string + s[0];
        // cout << 2 << endl;
        for(int j=1; j<n; j++)
        {
            if(lst == s[j])
            {
            
                f=1;
                lst = '0';
            }
            else if (f) {
            
                   new_string += s[j];
                   f=0;
                   lst = s[j];
            }
        }
        // cout << 5 << endl;
        cout << new_string << endl;


    }
}