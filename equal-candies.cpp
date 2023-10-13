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
        int a[n];
        int m = INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]<m) m=a[i];
        }
        int eat_candies = 0;
        for(int i=0; i<n; i++){
            if(a[i]!=m)
            {
                eat_candies += (a[i]-m); 
            }
        }
        cout << eat_candies << endl;
    }
    
}