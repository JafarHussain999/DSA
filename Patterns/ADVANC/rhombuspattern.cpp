#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int sp=1;sp<=n-i;sp++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}