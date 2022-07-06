#include<bits/stdc++.h>
using namespace std;

int precidence(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='/' || c=='*'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    return -1;
}

string infixtoprefix(string s){
    reverse(s.begin(),s.end());
    stack<char> stk;
    string result;

    for(int i=0;i<s.size();i++){
        if(s[i] >='a' && s[i] <='z' || s[i] >='A' && s[i] <='Z' ){
            result+=s[i];
        }
        else if(s[i] == ')'){
            stk.push(s[i]);
        }
        else if(s[i] == '('){
            while(!stk.empty() && stk.top()!=')'){
                result+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else{
            while(!stk.empty() && precidence(stk.top()) >= precidence(s[i])){
                result+=stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }

    }
    while(!stk.empty()){
        result+=stk.top();
        stk.pop();
    }
    reverse(result.begin(),result.end());
    return result;
}

int main(){
    string s="(a-b/c)*(a/k-l)";
    cout<<infixtoprefix(s);
    return 0;
}