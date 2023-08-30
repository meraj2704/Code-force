#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = a[0];
        int min = a[0];
        for(int i=0; i<n; i++)
        {
             min &= a[i];
             max |= a[i];
        }
        cout << max-min << endl;
    }
}