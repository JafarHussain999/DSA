#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a={1,3,-1,-3,5,3,6,7,9},ans;
    int k=3,n=a.size(),max=INT_MIN;;
    for(int i=0;i<=n-k;i++){
        for(int j=i;j<i+k;j++){
            if(a[j] > max){
                max=a[j];
            }
        }
        ans.push_back(max);
        max=INT_MIN;
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;


}