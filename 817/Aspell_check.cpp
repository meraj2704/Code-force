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
    set<char>a;
    int count = 0;
    for(int i=0; i<n; i++)
    {   char x;
        cin >> x;
        a.insert(x);
    }
    
    if(n==5 && a.size()==5)
    {
        for(auto& i : a)
        {
            if(i=='T'|| i=='i'|| i=='m'||i=='u'||i=='r')
            {
                count++;
            }
            
        }
        if(count == 5)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
}