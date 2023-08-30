#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char tab[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++) cin >> tab[i][j];
        }
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(tab[i][j]=='#' && tab[i-1][j-1]=='#' && tab[i-1][j+1] =='#' && tab[i+1][j+1] =='#' && tab[i+1][j-1] =='#')
                {
                    cout << i+1 << " " << j+1 << endl;
                }
            }
        }
    }
    
}