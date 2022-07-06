#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the n values";
    cin>>n;
    int n1=n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n1; j++)
        {
            cout<<"*";
        }
        n1--;
        cout<<"\n";
    }
    return 0;
}
/*
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
*/