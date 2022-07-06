#include<bits/stdc++.h>
using namespace std;
int main(){
    int k=0;
    int* ptr=&k;
    cout<<ptr<<"\n";
    ptr++;
    cout<<ptr<<"\n";
    k++;
    int* ptr1=&k;
    cout<<ptr1<<"\n";
    return 0;
}