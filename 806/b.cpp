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
        char str[n];
        cin >> str;
        int i = 0, alphabet[26] = {0}, j;
        while (str[i] != '\0')
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                j = str[i] - 'A';
                ++alphabet[j];
            }
            ++i;
        }
        int sum = 0;
        for (i = 0; i < 26; i++)
        {
            sum += (alphabet[i]);
            if(alphabet[i]!=0) sum +=1;
        }
            
        cout << sum << endl;
    }
    return 0;
}
