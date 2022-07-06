#include<bits/stdc++.h>
using namespace std;

int postfixEvalution(string str){
    stack<int> stk;
    for(int i=0;i<str.size();i++){
        if(str[i] >= '0' && str[i] <='9'){
            stk.push(str[i]-'0');
        }
        else{
            int operand2=stk.top();
            stk.pop();
            int operand1=stk.top();
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
    return stk.top();;
    

}
int main(){
    string str="46+2/5*7+";
    cout<<postfixEvalution(str);
    
    return 0;
}