#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*
    int maxe=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=a[k];
            }
            maxe=max(maxe,sum);
        }
    }
    cout<<maxe;
    */
    //Optimez solution below
    int currentSum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum < 0){
            currentSum=0;
        }
        maxsum=max(currentSum,maxsum);
    }
    cout<<maxsum;
    return 0;
}