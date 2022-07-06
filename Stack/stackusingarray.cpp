#include<bits/stdc++.h>
using namespace std;

#define n 100

class stackuarr{
    
    int* arr;
    int top;
    public:
    stackuarr(){
        arr=new int[n];
        top=-1;
    }
    void push(int val){
        if(top == n-1){
            cout<<"Stack is full";
        }
        arr[++top]=val;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack is empty";
            return;
        }
        top--;
    }
    void Top(){
        if(top == -1){
            cout<<"Stack is empty";
            return;
        }
        cout<<arr[top]<<"\n";
    }
    bool empty(){
        return top == -1;
    }

};


int main(){
    stackuarr st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.Top();
    st.pop();
    st.Top();

    return 0;
}