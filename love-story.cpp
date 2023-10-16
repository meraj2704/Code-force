#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string given_s = "codeforces";
        string user_s;
        cin >> user_s;
        int not_match =0;
        for(int i=0; i<given_s.size(); i++){
            if(given_s[i]!=user_s[i]) not_match++;
        }
        cout << not_match << endl;

    }
    
}