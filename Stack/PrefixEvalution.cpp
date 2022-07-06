#include<bits/stdc++.h>
using namespace std;

stack<int> stk;

void prefixEvalution(string str){
    
    for(int i=str.size()-1;i>=0;i--){
        if(str[i] >= '0' && str[i] <='9'){
            stk.push(str[i]-'0');
        }
        else{
            int operand1=stk.top();
            stk.pop();
            int operand2=stk.top();
            stk.pop();
            switch (str[i])
            {
                case '+':stk.push(operand1+operand2);
                break;
                case '-':stk.push(operand1-operand2);
                break;
                case '/':stk.push(operand1/operand2);
                break;
                case '*':stk.push(operand1*operand2);
                break;
                case '^':stk.push(operand1^operand2);
                break;
            }
        }

    }
    

}
int main(){
    string str="-+7*45+20";
    prefixEvalution(str);
    cout<<stk.top();
    return 0;
}