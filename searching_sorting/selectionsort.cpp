#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int minindex=0,minele=INT_MAX;
    for(int i=0;i<n;i++){
        minindex=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                minindex=j;
            }
            swap(a[minindex],a[i]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}