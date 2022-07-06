#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows,colum;
    cout<<"Enter the rows and column"<<"\n";
    cin>>rows>>colum;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=colum;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}