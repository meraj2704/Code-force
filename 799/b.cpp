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
         int a[n];
         set<int> s;
         for(int i=0; i<n; i++)
         {
            cin >> a[i];
            s.insert(a[i]);
         }
         if(n== s.size())
         {
            cout << s.size() << endl;
         }
         else if(n%2!=0)
         {
            if((s.size())%2!=0)
            {
                cout << s.size() << endl;
            }
            else cout << (s.size())-1 << endl;
         }
         else{
            if((s.size())%2!=0)cout << (s.size())-1 << endl;
            else cout << s.size() << endl;
         }
    }
}