#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int cou = 0;
        if (a < b)
            cou += 1;
        if (a < c)
            cou += 1;
        if (a < d)
            cou += 1;
        cout << cou << endl;
    }
}