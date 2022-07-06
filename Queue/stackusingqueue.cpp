#include<bits/stdc++.h>
using namespace std;

class stackuqueue{
    public:
    queue<int> q1,q2,tempq;

    void push(int val){
        q2.push(val);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        tempq=q1;
        q1=q2;
        q2=tempq;
    }
    void pop(){
        q1.pop();
    }
    int top(){
        return q1.front();
    }
};

int main(){
    stackuqueue s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<"\n";
    s.pop();
    cout<<s.top()<<"\n";
    



    return 0;
}