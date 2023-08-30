#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int arr[n];
        int one=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]==1)one++;
        }
        if(one==0)
        {
            cout << "NO"<< endl;
        }
        else cout << "YES"<< endl;
    }
}