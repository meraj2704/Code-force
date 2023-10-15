#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n][2];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin >> a[i][j];
            }
        }
        int highQuality = 0;
        int winner =0;
        for(int i=0; i<n; i++)
        {
            if(a[i][0]<11)
            {
                if(a[i][1]>highQuality){
                    highQuality = a[i][1];
                    winner = i+1;
                }
            }
        }
        cout << winner << endl;
    }
    
}