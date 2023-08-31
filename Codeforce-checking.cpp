#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string str = "codeforces.";
        char user_input;
        cin >> user_input;
        int a=0;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]==user_input)a++;
        }
        if(a==0)cout << "No" << endl;
        else cout << "YES" << endl;
    }
}