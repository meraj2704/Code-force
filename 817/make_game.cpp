#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v1;
        vector<string> v2;
        vector<string> v3;
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            v2.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            string x;
            cin >> x;
            v3.push_back(x);
        }
        int a = 0;
        int mark1 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v1[i] == v2[j])
                    a++;
                if (v1[i] == v3[j])
                    a++;
            }
            if (a == 1)
            {
                mark1+=1;
            }
            else if(a==0)
            {
                mark1+=3;
            }
            else
            {
                mark1+=0;
            }
            a=0;
        }
        cout << mark1 << " ";
        int mark2 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v2[i] == v1[j])
                    a++;
                if (v2[i] == v3[j])
                    a++;
            }
            if (a == 1)
            {
                mark2+=1;
            }
            else if(a==0)
            {
                mark2+=3;
            }
            else
            {
                mark2+=0;
            }
            a=0;
        }
        cout << mark2 << " ";
        int mark3 = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v3[i] == v1[j])
                    a++;
                if (v3[i] == v2[j])
                    a++;
            }
            if (a == 1)
            {
                mark3+=1;
            }
            else if(a==0)
            {
                mark3+=3;
            }
            else
            {
                mark3+=0;
            }
            a=0;
        }
        cout << mark3 << endl;
    }
}