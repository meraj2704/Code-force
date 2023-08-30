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
    int count =0;
    for(int i=1; i<n; i++)
    {
        for(int j=1; j < n; j++)
        {
            for(int k=1; k <= n/2; k++)
            {
                if(i<=j && j<=k)
                {
                    if(i+j+k==n){
                         count ++;
                        // cout << i << " " << j << " " << k << endl;
                    }
                }
            }
        }
    }
    cout << count << endl;
    }
}