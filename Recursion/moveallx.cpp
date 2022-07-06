#include<bits/stdc++.h>
using namespace std;

string moveallx(string s){
    if(s.length() == 0){
        return "";
    }
    char st=s[0];
    string ans=moveallx(s.substr(1));
    if(st ==  'x'){
        return ans+st;
    }
    return (st+ans);
}

int main(){

    cout<<moveallx("xaabxxdexxxees");
    return 0;
}