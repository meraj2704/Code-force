#include<iostream>
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
        vector<long long int> pos;
        vector<long long int> neg;
        long long int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i] <0) neg.push_back(arr[i]);
            else pos.push_back(arr[i]);
        }
        int si1 = pos.size();
        int si2 = neg.size();
        long long int sump =0;
        long long int sumn = 0;
        for(int i=0; i<si1; i++) sump+= pos[i];
        for(int i=0; i<si2; i++) sumn+= abs(neg[i]);
        cout <<abs(sump-sumn)<<endl;
    }
}