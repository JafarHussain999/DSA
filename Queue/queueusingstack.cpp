#include<bits/stdc++.h>
using namespace std;

class queueustack{
    stack<int> stk1,stk2;
    public:
    void push(int val){
        stk1.push(val);
    }
    int pop(){
        if(stk1.empty() && stk2.empty()){
            cout<<"Queue is empty\n";
            return -1;
        }
        if(stk2.empty()){
            while (!stk1.empty())
            {
                stk2.push(stk1.top());
                stk1.pop();
            }
            int topval=stk2.top();
            stk2.pop();
            return topval;
        }
    }

    bool emptyq(){
        if(stk1.empty() && stk2.empty()){
            return  1;
        }
        return 0;
    }

};

int main(){

    queueustack q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"Element is Delated:"<<q.pop()<<"\n";
    cout<<q.emptyq();
    return 0;
}