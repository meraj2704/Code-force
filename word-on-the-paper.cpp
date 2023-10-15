#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[8][8];
        string b="";
        char un;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin >> un;
                if(un>='a' && un<='z'){
                    b+=un;
                }
            }
        }
        cout << b << endl;
    }
    
}