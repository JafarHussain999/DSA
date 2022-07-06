#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n values:";
    cin>>n;
    /*
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            if(j<n-i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<"\n";
    }*/
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<"\n";
    }

    return 0;
}