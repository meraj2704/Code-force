#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--)
    {
        int n,x,y;
        cin >> n >> x >> y;
        if(x>=1 && y>=1) cout << -1 << endl;
        else if(x|| y)
        {
            int m1 = max(x,y);
            if((n-1)%m1==0)
            {
                int ans =1;
                for(int i=1; i<n; i++)
                {
                    for(int j=1; j<=m1; j++)
                    {
                        cout << ans << " ";
                        i++;
                    }
                    ans = i+1;
                    i--;
                }
                cout << endl;
            }
            else cout << -1 << endl;
        }
        else cout << -1 << endl;
    }
}