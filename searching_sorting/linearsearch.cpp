#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,k=0;
    cin>>n>>x;
    int f=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==x){
            f=1;
            k=i;
            break;
        }
    }
    if(f==1){
        cout<<"Element found at:"<<k;
    }
    else{
        cout<<"Element not found";
    }
    return 0;
}