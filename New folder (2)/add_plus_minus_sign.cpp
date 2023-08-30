#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            if (a[i] == '1')
                sum++;
            if (sum > 0)
            {
                if (a[i+1] == '0')
                    cout << "+";
                else
                {
                    cout << "-";
                    sum=-2;
                }
            }
            else
            cout << "+";
        }
        cout << endl;
    }
}