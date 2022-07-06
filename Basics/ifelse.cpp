#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;
    if(age>18){
        cout<<"Eligibility for the vote";
    }
    else if(age > 100){
        cout<<"Invalid Data";
    }
    else{
        cout<<"Not Eligibilty";
    }
    return 0;
}