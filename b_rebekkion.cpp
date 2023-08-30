#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int i = 0, j = n - 1, a = 0;
        while (i < j)
        {
            while (i < j && arr[i] == 0)
            {
                i++;
            }
            while (i < j && arr[j] == 1)
            {
                j--;
            }
            if (i < j)
            {
                a++, i++, j--;
            }
        }
        cout << a << endl;
    }
}