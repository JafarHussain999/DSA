#include<bits/stdc++.h>
using namespace std;

int firstocc(int arr[],int n,int i,int key){

    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key){
    int t=lastocc(arr,n,i+1,key);
    if( t != -1){
        return t;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main(){

    int arr[]={4,2,1,2,5,2};
    cout<<firstocc(arr,6,0,2)<<" ";
    cout<<lastocc(arr,6,0,2)<<" ";
    return 0;
}