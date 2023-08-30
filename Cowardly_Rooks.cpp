#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int tab[n][n];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin >> tab[i][j];
            }
        }

        if(n==m) cout << "NO" << endl;
        else cout << "YES" << endl;
        // puts(n==m? "NO" : "YES");
    }
}