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

void Insert(node* &head,int val){
    node* n=new node(val);
    node* temp=head;

    if(head == NULL){
        head=n;
        return;
    }
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

void reverse(node* &head){
    node* prvptr=NULL;
    node* curptr=head;
    node* nxtptr;

    while(curptr != NULL){
        nxtptr=curptr->next;
        curptr->next=prvptr;
        prvptr=curptr;
        curptr=nxtptr;
    }
    head=prvptr;
}
/*
node* reverse1(node* &head){
    node* prvptr=NULL;
    node* curptr=head;
    node* nxtptr;

    while(curptr != NULL){
        nxtptr=curptr->next;
        curptr->next=prvptr;
        prvptr=curptr;
        curptr=nxtptr;
    }
    return prvptr;
}
*/

void display(node* head){
    node* temp=head;
    cout<<"\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
    cout<<"\n-----------------";
}

int main(){
    node* head=NULL;

    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    display(head);
    reverse(head);
    display(head);

    /*node* newhead=reverse1(head);
    display(newhead);*/
    return 0;
}