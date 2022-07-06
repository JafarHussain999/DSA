#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,k=0,mid;
    cin>>n>>x;
    int f=0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,r=n;
    while(l<=r){
        mid=(l+r)/2;
        if(a[mid]==x){
            f=1;
            k=mid;
            break;
        }
        if(a[mid] < x){
            l=mid+1;
        }
        else{
            r=mid-1;
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