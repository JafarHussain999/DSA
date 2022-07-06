#include<bits/stdc++.h>
using namespace std;

void countsort(int array[],int size){
    int output[10];
    int count[10]={0};
    int maxele = INT_MIN;

    for (int i = 1; i < size; i++) {
        maxele = max(maxele,array[i]);
    }

    for (int i = 0; i < size; i++) {
        count[array[i]]++;
    }
    for (int i = 1; i <= maxele; i++) {
      count[i] += count[i - 1];
    }

    for (int i = size - 1; i >= 0; i--) {
      output[--count[array[i]] ] = array[i];
    }

    for (int i = 0; i < size; i++) {
      array[i] = output[i];
    }

}

int main(){
    int arr[] = {4, 2, 2, 8, 3, 3, 1};
    int n=7;
    countsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}