#include<bits/stdc++.h>
using namespace std;

bool balancedparenthesis(string s){
    stack<char> stk;

    for(int i=0;i<s.size();i++){
        if(s[i]=='{' || s[i]=='[' || s[i]=='('){
            stk.push(s[i]);
        }
        else if( s[i] == ')' ){
            if(!stk.empty() && stk.top() == '('){
                stk.pop();
            }
            else{
                return false;
            }
        }
        else if( s[i] == ']' ){
            if(!stk.empty() && stk.top() == '['){
                stk.pop();
            }
            else{
                return false;
            }
        }
        
        else if( s[i] == '}' ){
            if(!stk.empty() && stk.top() == '{'){
                stk.pop();
            }
            else{
                return false;
            }
        }
    }
    
    if(!stk.empty())
        return false;
    return true;
}

int main(){
    string str="{[()]}";

    if(balancedparenthesis(str)){
        cout<<"It is Balanced";
    }
    else{
        cout<<"It is not Balanced";
    }

    return 0;
}