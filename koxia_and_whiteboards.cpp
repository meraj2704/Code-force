#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int board1[a];
        int board2[b];
        for (int i = 0; i < a; i++)
            cin >> board1[i];
        for (int i = 0; i < b; i++)
            cin >> board2[i];
        long long sum =0;
        priority_queue<int, vector<int>, greater<int>>q;
        for(int i = 0; i < a; i++)
        {
            q.push(board1[i]);
        }
        for(int i = 0; i < b; i++)
        {
            q.pop();
            q.push(board2[i]);
        }
        while(!q.empty())
        {
            sum += q.top();
            q.pop();
        }
        cout << sum << endl;
    }
}