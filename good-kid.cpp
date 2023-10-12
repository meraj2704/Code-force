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
        for( int i=0; i<n; i++)
        {
            cin >> a[i];
            if(m>a[i]) m=a[i];
        }
        for( int i=0; i<n; i++)
        {
            if(a[i]==m){
                a[i]++;
                break;
            }
        }
         int product = 1;
        for( int i=0; i<n; i++){
            product *=a[i];
        }
        cout << product << endl;

    }
    
}