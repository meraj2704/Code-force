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
        string s;
        cin >>  s;
        // bool one = false;
        // bool zero = false;
        long long mone = 0;
        long long mzero = 0;
        long long o =0, on=0;
        long long z =0, ze =0;
        for(long i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                on++;
                o++;
                z =0;
                
                mone = max(mone,o);
            }
            else{
                ze++;
                z++;
                o =0;
                mzero = max(mzero, z);
            }
        }
        // if(mone>ze && mone>= on-mone) cout << mone * mone << endl;
        // else if(mzero>on && mzero>= ze-mzero) cout << mzero * mzero << endl;
        // else cout << on *ze << endl;
        // cout <<mone<<" "<< mzero <<endl;
        // cout <<on<< " "<< ze<< endl;

        long long r1 =mone * mone;
        long long r2 = mzero* mzero;
        long long r3 = on * ze;
        long long m1 =max(r1,r2);
        long long m2 = max(m1,r3);
        cout << m2 << endl;
    }
}