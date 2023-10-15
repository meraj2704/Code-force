#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int d = abs(a-b);
        int count =0;
        if(d%2!=0) 
         count = (d/2)+1;
         else count = d/2;
        if(count%c!=0) count = (count/c) +1;
        else count = count/c;
        cout << count << endl;
    }
    
}