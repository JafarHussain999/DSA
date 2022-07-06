#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f=0,i;
    cout<<"Enter the n values:\n";
    cin>>n;
    for(i=2;i<=n;i++){
        if(n%i==0){
            break;
        }
    }
    if(i==n){
        cout<<"It is prime\n";
    }
    else{
        cout<<"It is not prime\n";
    }

    return 0;
}
