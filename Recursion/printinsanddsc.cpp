#include<bits/stdc++.h>
using namespace std;

void descf(int n){
    if(n == 0){
        return;
    }
    cout<<n<<" ";
    descf(n-1);
}
void incf(int n){
    if(n == 0){
        return;
    }
    incf(n-1);
    cout<<n<<" ";
}
int main(){

    int n;
    cin>>n;
    descf(n);
    cout<<"\n";
    incf(n);
    return 0;
}