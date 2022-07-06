//https://leetcode.com/problems/middle-of-the-linked-list/

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

void middle(node* &head){
    node* temp=head;
    node* temp1=head;
    node* midptr;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    cout<<c;
    int loopend=c/2;

    for(int i=0;i<loopend;i++){
        temp1=temp1->next;
    }
    head=temp1; 
}

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
    Insert(head,4);
    Insert(head,5);
    Insert(head,6);
    display(head);

    middle(head);
    display(head);

    return 0;
}