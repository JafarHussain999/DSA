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

void InsertAtBegin(node* &head,int val){
    node* n=new node(val);
    if(head == NULL){
        n->next=n;
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void InsertAtEnd(node* &head,int val){
    node* n=new node(val);
    node* temp=head;

    if(head == NULL){
        InsertAtBegin(head,val);
    }
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}

void deleteAthead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=temp->next->next;

}
void deletion(node* &head,int pos){
    node* temp=head;

    if(pos == 1){
        deleteAthead(head);
    }
    for(int i=0;i<pos;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}

void display(node* head){
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"NULL";
    cout<<"\n";
    cout<<"-----------------\n";
}
int main(){
    node* head=NULL;
    
    InsertAtEnd(head,1);
    InsertAtEnd(head,2);
    InsertAtEnd(head,3);
    display(head);
    
    //InsertAtBegin(head,4);
    //display(head);

    //deletion(head,1);
    display(head);
    return 0;
}