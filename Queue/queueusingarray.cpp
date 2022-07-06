#include<bits/stdc++.h>
using namespace std;

#define n 100
int queuearr[n];
int front=-1,back=-1;

void enqueue(int val){
    if(back == n-1){
        cout<<"Queue is full";
    }
    queuearr[++back]=val;
    if(front == -1)
        front++;
}

void dequeue(){
    if(front == -1 && front > back){
        cout<<"No Element to delete in the queue";
    }
    front++;
}

int peek(){
    if(front == -1 && front > back){
        cout<<"No Element to delete in the queue";
    }
    return queuearr[front];
}

bool empty(){
    if(front == -1 && front > back){
        return true;
    }
    return false;

}

int main(){

    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();
    cout<<peek();
    cout<<empty()<<"\n";
    return 0;
}