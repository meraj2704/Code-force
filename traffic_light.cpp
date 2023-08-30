#include<iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char k;
        string color;
        int x;
        cin >> n >> k >> color;
        for(int i=n-1; i>=0; i--)
        {
            if(color[i]== k)
            {
                x = i;
                break;
            }
        }
        bool found = true;
        int ctr=0;
        
        while(found)
        {
            if(color[x]!= 'g') ctr++;
            else found = false;
            if(x== n-1) x = 0;
            else x++;
        }
        cout << ctr << endl;
    }
}