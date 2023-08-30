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
        string c1,c2;
        cin >> c1 >> c2;
        bool a = true;
        for(int i=0; i<n; i++)
        {
            if(c1[i]=='R' && c2[i]=='R' || c1[i]=='G' && c2[i]=='G' || c1[i]=='B' && c2[i]=='B' || c1[i]=='G' && c2[i]=='B' || c1[i]=='B'&& c2[i]=='G')
            {
                continue;
            }
            else{
                cout << "NO" << endl;
                a = false;
                break;
            }
        }
        if(a) cout << "YES" << endl;
        

    }
}