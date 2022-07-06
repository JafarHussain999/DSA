#include<bits/stdc++.h>
using namespace std;

#define n 100

int stackarr[n],top=-1;

void push(int data){
    if(top == n-1){
        cout<<"\nStack is full";
        return;
    }
    stackarr[++top]=data;
}

void pop(){
    if(top == -1){
        cout<<"\nStack is empty";
        return;
    }

    top--;
}

void Top(){
    if(top == -1){
        cout<<"\nStack is empty";
        return;
    }
    cout<<"\nTop element is :"<<stackarr[top]<<" ";
}

void display(){
    if(top == -1){
        cout<<"\nStack is empty";
        return;
    }
    cout<<"\n";
    for(int i=top;i>=0;i--){
        cout<<stackarr[i]<<" ";
        top--;
    }

}

int main(){
    push(1);
    push(2);
    push(3);
    Top();
    pop();
    Top();
    display();

    return 0;
}
