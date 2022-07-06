#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int a[6]={12,3,7,1,6,9};
    int n=6,target=24,curr=0 ;
    bool found=false;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        int l=i+1,r=n-1;
        while(l<r){
            curr=a[i]+a[l]+a[r];
            if(curr == target){
                found=true;
                break;
            }
            else if(curr < target){
                l++;
            }
            else if(curr > target){
                r--;
            }
        }
    }
    if(found){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}