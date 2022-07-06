#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,l=0,rev=0;
    cout<<"Enter the n values:";
    cin>>n;
    while(n!=0){
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    cout<<rev<<"\n";
    return 0;
}