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
        int life[n];
        long long a=0;
        for(int i=0; i<n; i++)
        {
            cin >> life[i];
            a+=life[i];
        }
        int m = INT_MIN;
        int add[n];
        for(int i=0; i<n; i++)
        {
            cin >> add[i];
            a+=add[i];
            m = max(m, add[i]);
        }
        cout << a- (long long) m << endl;
    }
}