#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n,q;
        cin >> n >> q;
        long long a[n];
        long long query[q][2];
        long long odd=0,even=0;
        long long sum = 0;
        for(int i=0; i<n; i++)
        {
             cin >> a[i];
             sum += a[i];
             if(a[i]%2==0)even++;
             else odd++;
        }
        for(int i=0; i<q; i++)
        {
            for(int j=0; j<2; j++) cin >> query[i][j];
        }
        
        for(int i=0; i<q; i++)
        {
            if(query[i][0]==0 && query[i][1]%2==0)
            {
                sum+=(query[i][1]*even);
                cout << sum << endl;
            }
            else if(query[i][0]==0 && query[i][1]%2!=0)
            {
                sum+=(query[i][1]*even);
                cout << sum << endl;
                odd+=even;
                even=0;
            }
            else if(query[i][0]==1 && query[i][1]%2==0)
            {
                sum+=(query[i][1]*odd);
                cout << sum << endl;
                
            }
            else
            {
                sum+=(query[i][1]*odd);
                cout << sum << endl;
                even+=odd;
                odd=0;
            }
        }
        
    }
}