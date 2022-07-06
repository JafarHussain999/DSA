#include<bits/stdc++.h>
using namespace std;

void linearSearch(int arr[],int n,int key){
    int f=0;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            f=1;
        }
    }
    if(f==1)
        cout<<"Found";
    else
        cout<<"Not found";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    linearSearch(arr,n,key);
    return 0;
}