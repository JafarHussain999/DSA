#include<bits/stdc++.h>
using namespace std;

string removedup(string s){
    if(s.length() == 0){
        return " ";
    }
    char st=s[0];
    string ans=removedup(s.substr(1));
    if(st ==  ans[0]){
        return ans;
    }
    return (st+ans);
}

int main(){

    cout<<removedup("aabdeees");
    return 0;
}