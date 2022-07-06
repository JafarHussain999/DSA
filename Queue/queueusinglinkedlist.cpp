#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};

class queuell{
    node* front=NULL;
    node* back=NULL;
    public:
    queuell(){
        front=NULL;
        back=NULL;
    }

    void push(int val){
        node* n=new node(val);

        if(front == NULL){
            back=n;
            front=n;
        }
        back->next=n;
        back=n;
    }

    void pop(){
        if(front == NULL){
            cout<<"No element in queue\n";
        }
        front=front->next;
    }
    
    int peek(){
        if(front == NULL){
            cout<<"No element in queue\n";
        }
        return front->data;
    }

    bool empty(){
        if(front == NULL){
            cout<<"No element in queue\n";
            return true;
        }
        return false;
    }

};

int main(){

    queuell q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peek()<<"\n";
    q.pop();
    cout<<q.empty()<<"\n";
    cout<<q.peek()<<"\n";
    return 0;
}