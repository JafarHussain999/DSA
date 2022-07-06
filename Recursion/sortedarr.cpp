#include<bits/stdc++.h>
using namespace std;

bool sortf(int a[],int n){
    if(n == 1){
        return true;
    }
    return (a[0]<a[1] && sortf(a+1,n-1));
}
int main(){

    int a[5]={0,1,2,8,4};
    if( sortf(a,5) == true){
        cout<<"Array is Sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    return 0;
}